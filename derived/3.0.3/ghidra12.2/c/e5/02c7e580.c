
void FUN_02c7e580(undefined8 param_1,long *param_2,byte *param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined **local_80;
  undefined8 uStack_78;
  byte local_70;
  undefined1 auStack_48 [8];
  
  puVar2 = PTR_DAT_04bb43c0;
  local_70 = *param_3;
  local_80 = &PTR_FUN_04ab2e00;
  uVar7 = 0;
  if (7 < local_70) {
    local_70 = 0xff;
  }
  uStack_78 = param_1;
  do {
    (**(code **)(*param_2 + 0x10))(auStack_48,param_2,uVar7);
    lVar4 = (**(code **)(*param_2 + 0x20))(param_2);
    uVar1 = 1 << (ulong)(uVar7 & 0x1f);
    if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
      lVar4 = *(long *)puVar2;
      uVar3 = FUN_0277d6c4(auStack_48);
      if (*(long *)puVar2 != 0) {
        lVar4 = *(long *)(lVar4 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
           (uVar5 = (*(code *)*local_80)(&local_80,auStack_48), (uVar5 & 1) == 0))
        goto LAB_02c7e604;
      }
      lVar4 = (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = (ulong)(uVar7 >> 5) * 4;
      *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
    }
LAB_02c7e604:
    uVar7 = uVar7 + 1;
    if (uVar7 == 15000) {
      return;
    }
  } while( true );
}

