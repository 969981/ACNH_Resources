
void FUN_03194af0(long param_1,undefined8 param_2,uint param_3)

{
  byte *pbVar1;
  undefined *puVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  byte local_5c [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_5c[0] = *(byte *)(param_1 + 0x1f8);
  if (7 < local_5c[0]) {
    local_5c[0] = 0xff;
  }
  lVar5 = FUN_02583354(DAT_055021a0,local_5c,1);
  if (lVar5 == 0) {
    return;
  }
  lVar10 = *(long *)(lVar5 + 0x1aa0);
  uVar9 = param_3;
  if (0x27 < param_3) {
    uVar9 = 0xffffffff;
  }
  if (lVar10 == 0) {
    FUN_02816c30(*(long *)(lVar5 + 0x1a88) + *(long *)(lVar5 + 0x1a80),param_2,uVar9,0);
    goto LAB_03194c00;
  }
  if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
    uVar6 = 0;
    plVar7 = *(long **)(lVar10 + 0x20);
joined_r0x03194d28:
    if (plVar7 != (long *)0x0) {
      local_58 = *(undefined8 *)(lVar5 + 0x1a80);
      uStack_50 = *(undefined8 *)(lVar5 + 0x1a88);
      local_48 = 0x8b8;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
    }
  }
  else {
    uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    uVar6 = uVar6 & 0xffffffff;
    if (*(long *)(lVar5 + 0x1aa0) != 0) {
      plVar7 = *(long **)(*(long *)(lVar5 + 0x1aa0) + 0x20);
      goto joined_r0x03194d28;
    }
  }
  FUN_02816c30(*(long *)(lVar5 + 0x1a88) + *(long *)(lVar5 + 0x1a80),param_2,uVar9,0);
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0x1aa0) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar5 + 0x1aa0) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
LAB_03194c00:
  if (DAT_04c487d4 != -1) {
    local_58 = CONCAT44(local_58._4_4_,0x20);
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar2 + 4) & 1) != 0) && (pbVar1 = (byte *)(param_1 + 0x1f8), *pbVar1 < 8)) {
      uVar4 = FUN_02582d8c(pbVar1,1);
      puVar2 = PTR_DAT_04bb4fb8;
      if ((((uVar4 < 8) &&
           ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0' &&
            (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')))) &&
          (uVar4 = FUN_02582d8c(pbVar1,1), uVar4 < 8)) &&
         (*(char *)(*(long *)puVar2 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) {
        *(uint *)(*(long *)puVar2 + (ulong)uVar4 * 0x13f0 + 0x13bc) = uVar9;
      }
    }
  }
  bVar3 = *(byte *)(param_1 + 0x1c516);
  if ((int)(char)bVar3 != param_3) {
    if ((int)(char)bVar3 != 0xffffffff) {
      lVar5 = *(long *)(param_1 + 0x210);
      uVar9 = (uint)(char)bVar3;
      if ((char)bVar3 < '\x14') {
        puVar8 = (undefined8 *)(lVar5 + 0x590) + uVar9;
        if (0x13 < uVar9) {
          puVar8 = (undefined8 *)(lVar5 + 0x590);
        }
      }
      else if (bVar3 < 0x28) {
        puVar8 = (undefined8 *)(lVar5 + (ulong)(uVar9 - 0x14) * 8 + 0x630);
      }
      else if (uVar9 == 0x28) {
        puVar8 = (undefined8 *)(lVar5 + 0x6d0);
      }
      else if (uVar9 < 0x2a) {
        puVar8 = (undefined8 *)(lVar5 + 0x6d8);
      }
      else {
        puVar8 = (undefined8 *)(lVar5 + 0x6e0);
      }
      FUN_030bffe0(*puVar8,0);
    }
    lVar5 = *(long *)(param_1 + 0x210);
    if ((int)param_3 < 0x14) {
      puVar8 = (undefined8 *)(lVar5 + 0x590) + param_3;
      if (0x13 < param_3) {
        puVar8 = (undefined8 *)(lVar5 + 0x590);
      }
    }
    else if (param_3 < 0x28) {
      puVar8 = (undefined8 *)(lVar5 + (ulong)(param_3 - 0x14) * 8 + 0x630);
    }
    else if (param_3 == 0x28) {
      puVar8 = (undefined8 *)(lVar5 + 0x6d0);
    }
    else if (param_3 < 0x2a) {
      puVar8 = (undefined8 *)(lVar5 + 0x6d8);
    }
    else {
      puVar8 = (undefined8 *)(lVar5 + 0x6e0);
    }
    FUN_030bffe0(*puVar8,1);
    *(byte *)(param_1 + 0x1c516) = (byte)param_3;
  }
  return;
}

