
uint FUN_029566dc(long param_1,undefined4 *param_2,uint param_3)

{
  undefined *puVar1;
  byte bVar2;
  short sVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  int local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  
  puVar1 = PTR_DAT_04bb6298;
  puVar4 = PTR_DAT_04bb30a0;
  local_38 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  *param_2 = 0xfffe;
  sVar3 = *(short *)puVar1;
  if (1 < local_38) {
    local_38 = 0;
  }
  if (sVar3 == -1) {
LAB_02956784:
    lVar7 = *(long *)PTR_DAT_04bb32e8 + 0x4060;
    puVar9 = param_2;
  }
  else {
    local_34 = 0x20;
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_02956784;
    auVar11 = FUN_00a8c18c(*(undefined8 *)puVar4);
    lVar7 = auVar11._0_8_;
    puVar9 = auVar11._8_8_;
  }
  local_3c = *(byte *)(lVar7 + 2) - 1;
  bVar2 = *(byte *)(lVar7 + 4);
  if (bVar2 - 4 < 5) {
    local_40 = 0;
  }
  else if (bVar2 - 9 < 7) {
    local_40 = 1;
  }
  else {
    local_40 = (uint)(4 < bVar2 - 0x10) << 1;
  }
  if ((param_3 & 1) != 0) {
    local_3c = *(int *)(*(long *)PTR_DAT_04bb4920 + 0x210);
    local_40 = *(int *)(*(long *)PTR_DAT_04bb4920 + 0x214);
  }
  if (local_38 == 1) {
    puVar10 = (undefined8 *)0x0;
    if ((*(long *)(param_1 + 0x20) != 0) && (1 < *(uint *)(param_1 + 0x18))) {
      puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 8);
      if (((DAT_055d6e10 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&DAT_055d6e10,puVar9,0), iVar6 != 0)) {
        DAT_055d6e08 = &PTR_LAB_04a950b0;
        __cxa_guard_release(&DAT_055d6e10);
      }
      if (puVar10 != (undefined8 *)0x0) goto LAB_02956814;
LAB_02956884:
      puVar10 = (undefined8 *)0x0;
    }
  }
  else {
    if (local_38 != 0) {
      uVar5 = 0;
      goto LAB_029568a8;
    }
    puVar10 = (undefined8 *)0x0;
    if ((*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) && (*(int *)(param_1 + 0x18) != 0))
    {
      puVar10 = (undefined8 *)**(undefined8 **)(param_1 + 0x20);
      if (((DAT_055d6e10 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(&DAT_055d6e10,puVar9,0), iVar6 != 0)) {
        DAT_055d6e08 = &PTR_LAB_04a950b0;
        __cxa_guard_release(&DAT_055d6e10);
      }
      if (puVar10 == (undefined8 *)0x0) goto LAB_02956884;
LAB_02956814:
      uVar8 = (**(code **)*puVar10)(puVar10,&DAT_055d6e08);
      if ((uVar8 & 1) == 0) {
        puVar10 = (undefined8 *)0x0;
      }
    }
  }
  uVar5 = FUN_02956940(param_1,param_2,puVar10,&local_3c,&local_40,param_3 & 1);
LAB_029568a8:
  return uVar5 & 1;
}

