
void FUN_03c278b0(void *param_1,uint param_2,long param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined8 local_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined1 local_b4 [76];
  undefined1 local_68;
  
  uVar2 = (**(code **)(**(long **)(param_3 + 8) + 0x10))
                    (*(long **)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),
                     *(undefined4 *)(param_3 + 0x18));
  if ((int)param_2 <= (int)uVar2) {
    uVar2 = param_2;
  }
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      local_b8 = 0x4d;
      local_68 = 0;
      local_b4[0] = 0;
      local_c8 = &DAT_04b7e768;
      local_c0 = local_b4;
      (**(code **)(**(long **)(param_3 + 8) + 0x50))
                (*(long **)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),&local_c8,0x4c);
      iVar4 = uVar2 - (int)uVar5;
      if (0x38 < iVar4) {
        iVar4 = 0x39;
      }
      local_d0 = 0xffffffffffffffff;
      (**(code **)(local_c8 + 0x18))(&local_c8);
      puVar1 = local_c0;
      (**(code **)(local_c8 + 0x18))(&local_c8);
      lVar3 = 0;
      do {
        if (local_c0[lVar3] == '\0') goto LAB_03c27924;
        if (local_c0[lVar3 + 1] == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_03c27924;
        }
        if (local_c0[lVar3 + 2] == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_03c27924;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_03c27924:
      FUN_038e8350((long)param_1 + uVar5,(long)iVar4,puVar1,(long)(int)lVar3,&local_d0);
      uVar5 = uVar5 + 0x39;
    } while (uVar5 < uVar2);
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    memset(param_1,0,(ulong)(param_2 - uVar2));
  }
  return;
}

