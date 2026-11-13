
void FUN_013922f4(undefined8 param_1,undefined1 *param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  void *pvVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  undefined *local_50;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint local_34;
  
  bVar2 = param_3[1];
  local_48 = (uint)*param_3;
  uStack_44 = (uint)bVar2;
  local_50 = PTR_DAT_04bbc600 + 0x10;
  local_40 = (uint)param_3[2];
  uVar1 = local_48;
  if (*(uint *)(DAT_051a9970 + 0x10) <= local_48) {
    uVar1 = 0;
  }
  uVar4 = *(uint *)(*(long *)(DAT_051a9970 + 0x18) + (long)(int)uVar1 * 0x18 + 8);
  if (uStack_44 <= uVar4 && uVar4 != bVar2) {
    lVar6 = *(long *)(*(long *)(DAT_051a9970 + 0x18) + (long)(int)uVar1 * 0x18 + 0x10);
    uVar1 = *(uint *)(lVar6 + (ulong)bVar2 * 0x10);
    uVar4 = (uint)param_3[2];
    if ((local_40 <= uVar1 && uVar1 != uVar4) &&
       (lVar6 = *(long *)(lVar6 + (ulong)bVar2 * 0x10 + 8), lVar6 != 0)) {
      local_34 = local_48;
      if (param_3[3] == 1) {
        pvVar3 = (void *)(**(code **)(**(long **)(lVar6 + (ulong)uVar4 * 0x518 + 0x78) + 0x38))();
        memcpy(pvVar3,param_3,(ulong)param_4);
        return;
      }
      if (param_3[3] == 0) {
        lVar6 = lVar6 + (ulong)uVar4 * 0x518;
        pvVar3 = (void *)(**(code **)(**(long **)(lVar6 + 0x58) + 0x38))();
        memcpy(pvVar3,param_3,(ulong)param_4);
        pcVar5 = *(code **)(lVar6 + 0x68);
        if (pcVar5 != (code *)0x0) {
          local_34 = CONCAT31(local_34._1_3_,*param_2);
          (*pcVar5)(&local_34,&local_50);
        }
      }
    }
  }
  return;
}

