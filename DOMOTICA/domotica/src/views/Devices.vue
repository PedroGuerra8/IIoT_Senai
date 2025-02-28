<script setup lang="ts">
    import { Environment, Device } from '@/models/devices'; 
    import {reactive, ref} from 'vue';

    const enviroments : Array<Environment> = reactive([]);
    
    const ar: Device = reactive(new Device());
    ar.name = 'Ar condicionado';
    ar.color = '#1cd8e6';
    ar.icon = "mode_fan"
    

    const tv: Device = reactive(new Device());
    tv.name = 'Smart TV';
    tv.color = '#a94ae8';
    tv.state = true;
    tv.icon = "tv";

    const iluminacao: Device = reactive(new Device());
    iluminacao.name = 'Iluminação';
    iluminacao.color = '#e3e84a';
    iluminacao.icon = "light";

    const sala: Environment = reactive(new Environment());
    sala.name='Sala';
    sala.devices = [ar, tv, iluminacao]
    //sala.devices.push(ar);
    //sala.devices.push(tv);
    //sala.devices.push(iluminacao);

    enviroments.push(sala);

</script>

<template> 
    <main class="flex flex-column text-center justify-content-center align-items-center">
        <h1>Device page!</h1>
        <section class="enviroments flex flex-column">
            <div class="device" v-for="(enviroment, env_id) in enviroments" :key="env_id">
                <h3>{{ enviroment.name }}</h3>
                <div v-for="(device, dev_id) in enviroment.devices" :key="dev_id">
                    <section>
                        <h5>{{ device.name }}</h5>
                        <button>On</button>
                        <button>Off</button>
                    </section>
                </div>
            </div>
        </section>
    </main> 
</template>

<style scoped lang="scss">
    main{
        width: 100vw;
        min-height: 100vh;
        .enviroments{
            width: 98vw;
            min-height: 95vh;
            background-color: rgb(223, 15, 212);
            box-shadow: rgba(0, 0, 0, 0.25) 0px 54px 55px, rgba(0, 0, 0, 0.12) 0px -12px 30px, rgba(0, 0, 0, 0.12) 0px 4px 6px, rgba(0, 0, 0, 0.17) 0px 12px 13px, rgba(0, 0, 0, 0.09) 0px -3px 5px;
        }
    }
</style>