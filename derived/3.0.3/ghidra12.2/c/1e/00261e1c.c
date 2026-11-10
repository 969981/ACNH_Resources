
void FUN_00261e1c(void *param_1,void *param_2)

{
  undefined8 local_40;
  undefined4 local_38;
  
  if (param_2 != (void *)0x0) {
    memcpy(param_1,param_2,0x20);
    (**(code **)(*(long *)((long)param_1 + 0x2e0) + 0x10))
              (&local_40,(long)param_1 + 0x2e0,(long)param_2 + 0x2e0);
    (**(code **)(*(long *)((long)param_1 + 0x120) + 0x10))
              (&local_40,(long)param_1 + 0x120,(long)param_2 + 0x120);
    *(undefined1 *)((long)param_1 + 0x400) = *(undefined1 *)((long)param_2 + 0x400);
    memcpy((void *)((long)param_1 + 0x20),(void *)((long)param_2 + 0x20),0x40);
    local_40 = 0x200000000000;
    local_38 = 0;
    *(undefined8 *)((long)param_1 + 0x410) = *(undefined8 *)((long)param_2 + 0x410);
    (**(code **)(*(long *)((long)param_1 + 0x2e0) + 0x20))((long)param_1 + 0x2e0,&local_40);
    local_40 = 0x200000000000;
    local_38 = 0;
    (**(code **)(*(long *)((long)param_1 + 0x120) + 0x20))((long)param_1 + 0x120,&local_40);
    (**(code **)(*(long *)((long)param_1 + 0x328) + 0x10))
              (&local_40,(long)param_1 + 0x328,(long)param_2 + 0x328);
    (**(code **)(*(long *)((long)param_1 + 400) + 0x10))
              (&local_40,(long)param_1 + 400,(long)param_2 + 400);
    *(undefined1 *)((long)param_1 + 0x401) = *(undefined1 *)((long)param_2 + 0x401);
    memcpy((void *)((long)param_1 + 0x60),(void *)((long)param_2 + 0x60),0x40);
    local_40 = 0x200000000000;
    local_38 = 0;
    *(undefined8 *)((long)param_1 + 0x418) = *(undefined8 *)((long)param_2 + 0x418);
    (**(code **)(*(long *)((long)param_1 + 0x328) + 0x20))((long)param_1 + 0x328,&local_40);
    local_40 = 0x200000000000;
    local_38 = 0;
    (**(code **)(*(long *)((long)param_1 + 400) + 0x20))((long)param_1 + 400,&local_40);
    (**(code **)(*(long *)((long)param_1 + 0x370) + 0x10))
              (&local_40,(long)param_1 + 0x370,(long)param_2 + 0x370);
    (**(code **)(*(long *)((long)param_1 + 0x200) + 0x10))
              (&local_40,(long)param_1 + 0x200,(long)param_2 + 0x200);
    *(undefined1 *)((long)param_1 + 0x402) = *(undefined1 *)((long)param_2 + 0x402);
    memcpy((void *)((long)param_1 + 0xa0),(void *)((long)param_2 + 0xa0),0x40);
    local_40 = 0x200000000000;
    local_38 = 0;
    *(undefined8 *)((long)param_1 + 0x420) = *(undefined8 *)((long)param_2 + 0x420);
    (**(code **)(*(long *)((long)param_1 + 0x370) + 0x20))((long)param_1 + 0x370,&local_40);
    local_40 = 0x200000000000;
    local_38 = 0;
    (**(code **)(*(long *)((long)param_1 + 0x200) + 0x20))((long)param_1 + 0x200,&local_40);
    (**(code **)(*(long *)((long)param_1 + 0x3b8) + 0x10))
              (&local_40,(long)param_1 + 0x3b8,(long)param_2 + 0x3b8);
    (**(code **)(*(long *)((long)param_1 + 0x270) + 0x10))
              (&local_40,(long)param_1 + 0x270,(long)param_2 + 0x270);
    *(undefined1 *)((long)param_1 + 0x403) = *(undefined1 *)((long)param_2 + 0x403);
    memcpy((void *)((long)param_1 + 0xe0),(void *)((long)param_2 + 0xe0),0x40);
    local_40 = 0x200000000000;
    local_38 = 0;
    *(undefined8 *)((long)param_1 + 0x428) = *(undefined8 *)((long)param_2 + 0x428);
    (**(code **)(*(long *)((long)param_1 + 0x3b8) + 0x20))((long)param_1 + 0x3b8,&local_40);
    local_40 = 0x200000000000;
    local_38 = 0;
    (**(code **)(*(long *)((long)param_1 + 0x270) + 0x20))((long)param_1 + 0x270,&local_40);
    *(undefined2 *)((long)param_1 + 0x404) = *(undefined2 *)((long)param_2 + 0x404);
    *(undefined1 *)((long)param_1 + 0x406) = *(undefined1 *)((long)param_2 + 0x406);
    *(undefined4 *)((long)param_1 + 0x408) = *(undefined4 *)((long)param_2 + 0x408);
  }
  return;
}

