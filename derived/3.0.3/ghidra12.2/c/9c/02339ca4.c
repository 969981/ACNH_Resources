
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02339ca4(undefined8 *param_1,long param_2,uint param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined8 uVar10;
  byte bVar11;
  undefined8 *puVar12;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((*(char *)(param_2 + 0xc205) != '\0') || (**(char **)(param_2 + 0x5fa8) != '\0'))
  goto LAB_02339cd8;
  pbVar8 = (byte *)FUN_02335d54(param_2);
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_054f0960);
      puVar12 = &DAT_054f0958;
      if (iVar7 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar12 = &DAT_054f0958;
      }
    }
    else {
      puVar12 = &DAT_054f0958;
    }
  }
  else {
    puVar12 = (undefined8 *)(DAT_054f5738 + 0x204);
    if ((ulong)*pbVar8 < 8) {
      puVar12 = (undefined8 *)(DAT_054f5738 + 0x204) + *pbVar8;
    }
  }
  local_28 = 0x31;
  if ((*(uint *)((long)puVar12 + 4) >> 0x11 & 1) != 0) {
    if (DAT_04c487d4 != -1) {
      local_28 = 0x1a;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x1a & 1) != 0) goto LAB_02339dc0;
    }
    uVar10 = 0x3955;
LAB_02339eb0:
    *param_1 = uVar10;
    FUN_0277d4ac(param_1);
    return;
  }
LAB_02339dc0:
  pbVar8 = (byte *)FUN_02335d54(param_2);
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_054f0960);
      puVar12 = &DAT_054f0958;
      if (iVar7 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar12 = &DAT_054f0958;
    }
  }
  else {
    puVar12 = (undefined8 *)(DAT_054f5738 + 0x204);
    if ((ulong)*pbVar8 < 8) {
      puVar12 = puVar12 + *pbVar8;
    }
  }
  local_28 = 0x33;
  if ((*(uint *)((long)puVar12 + 4) >> 0x13 & 1) != 0) {
    uVar10 = 0xfffd;
    goto LAB_02339eb0;
  }
  if ((param_3 & 1) != 0) {
    uVar10 = 0x323d;
    goto LAB_02339eb0;
  }
  if ((DAT_05abbc58 == 0) || (((byte)(&DAT_00001230)[DAT_05abbc58] >> 6 & 1) == 0)) {
    if ((DAT_05ab5ea8 == 0) || ((*(byte *)(DAT_05ab5ea8 + 0x1a71) >> 1 & 1) == 0)) {
      pbVar8 = (byte *)FUN_02335d54(param_2);
      bVar3 = *pbVar8;
      bVar11 = bVar3;
      if (7 < bVar3) {
        bVar11 = 0xff;
      }
      local_28 = CONCAT31(local_28._1_3_,bVar11);
      if ((7 < bVar3) || (uVar9 = FUN_02538a40(&local_28), (uVar9 & 1) == 0)) goto LAB_02339cd8;
      uVar10 = 0x2244;
    }
    else {
      uVar6 = *(undefined2 *)(param_2 + 0xc344);
      uVar4 = *(undefined1 *)(param_2 + 0xc346);
      uVar5 = *(undefined1 *)(param_2 + 0xc347);
      local_28 = *(undefined4 *)(param_2 + 0xc344);
      uVar2 = *(undefined4 *)(param_2 + 0xc348);
      local_24 = uVar2;
      uVar9 = FUN_0277d9a8(&local_28);
      if ((uVar9 & 1) != 0) {
        *(undefined2 *)param_1 = uVar6;
        *(undefined1 *)((long)param_1 + 2) = uVar4;
        *(undefined1 *)((long)param_1 + 3) = uVar5;
        *(undefined4 *)((long)param_1 + 4) = uVar2;
        return;
      }
      uVar10 = 0xfffd;
    }
    *param_1 = uVar10;
    FUN_0277d4ac(param_1);
  }
  else {
LAB_02339cd8:
    uVar2 = DAT_0558600c;
    *(undefined4 *)param_1 = _DAT_05586008;
    *(undefined4 *)((long)param_1 + 4) = uVar2;
  }
  return;
}

