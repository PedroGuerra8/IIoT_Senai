import type { ApiResponse, Device, Environment } from "@/models/devices";
import { getCdn, getApi } from "./services.config";

export const getEnvironments = (): Promise<ApiResponse<Environment, Device>>=> {    
    return getCdn().get("?content_type=environment");
}


export const saveEnvironment = (name: string): Promise<void>=>{

    const env = new NewEnvironment();
    
}
