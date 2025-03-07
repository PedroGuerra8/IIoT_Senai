<script setup lang="ts">
    import { Environment, Device } from '@/models/devices'; 
    import {reactive, ref} from 'vue';
    import DeviceComponent from '@/components/DeviceComponent.vue';

    const enviroments : Array<Environment> = reactive([]);
    
    const ar: Device = reactive(new Device());
    ar.name = 'Ar condicionado';
    ar.color = '#1cd8e6';
    ar.icon = "ac_unit";
    ar.state = true;

    const tv: Device = reactive(new Device());
    tv.name = 'Smart TV';
    tv.color = '#a94ae8';
    tv.state = true;
    tv.icon = "tv";

    const iluminacao: Device = reactive(new Device());
    iluminacao.name = 'Iluminação';
    iluminacao.color = '#e3e84a';
    iluminacao.icon = "light";

    const tomada: Device = reactive(new Device());
    tomada.name = "Tomada Inteligente";
    tomada.color = '#fce303';
    tomada.icon = "power";

    const sala: Environment = reactive(new Environment());
    sala.name='Sala';
    sala.devices = [ar, tv, iluminacao, tomada]
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
            background-color: rgb(230, 169, 58);
            box-shadow: rgba(0, 0, 0, 0.25) 0px 54px 55px, rgba(0, 0, 0, 0.12) 0px -12px 30px, rgba(0, 0, 0, 0.12) 0px 4px 6px, rgba(0, 0, 0, 0.17) 0px 12px 13px, rgba(0, 0, 0, 0.09) 0px -3px 5px;
        }
    }
</style>