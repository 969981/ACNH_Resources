
undefined8 FUN_01a09250(long param_1,undefined8 *param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((param_2 != (undefined8 *)0x0) && (0 < *(int *)(param_1 + 0xa8))) {
    uVar5 = 0;
    local_28 = param_3;
    local_24 = param_3;
    do {
      if (uVar5 < *(uint *)(param_1 + 0x88)) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x90) + uVar5 * 8);
      }
      else {
        lVar2 = 0;
      }
      uVar3 = (**(code **)(*(long *)(lVar2 + 0x30) + 0x118))((long *)(lVar2 + 0x30),&local_28);
      if ((((uVar3 & 1) != 0) && (uVar5 < *(uint *)(param_1 + 0x88))) &&
         ((int)(param_4 & 0xff) < *(int *)(*(long *)(*(long *)(param_1 + 0x90) + uVar5 * 8) + 0xd8))
         ) {
        puVar4 = (undefined8 *)
                 (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x90) + uVar5 * 8)
                                                   + 0xc0) + ((ulong)param_4 & 0xff) * 8) + 0xf0))()
        ;
        uVar1 = *(undefined4 *)(puVar4 + 1);
        *param_2 = *puVar4;
        *(undefined4 *)(param_2 + 1) = uVar1;
        return 1;
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)*(int *)(param_1 + 0xa8));
  }
  return 0;
}

