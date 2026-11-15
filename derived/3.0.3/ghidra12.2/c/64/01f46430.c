
undefined8 FUN_01f46430(long *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int *piVar9;
  
  lVar6 = (**(code **)(*param_1 + 0x3a0))();
  if (*(int *)(lVar6 + 0x84) == 8) {
    return 0;
  }
  if (1 < *(int *)(param_1[1] + 0x750) - 1U) {
    return 0;
  }
  if (DAT_04c487d4 == -1) {
    return 0;
  }
  puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar8 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar8 >> 1 & 1) == 0) {
    return 0;
  }
  uVar4 = FUN_00a86724(DAT_04da7238);
  puVar3 = PTR_DAT_04bb3968;
  if (3 < uVar4) {
    return 0;
  }
  lVar6 = *(long *)PTR_DAT_04bb3968;
  if (lVar6 != 0) {
    uVar4 = 8;
    if ((int)*(uint *)(lVar6 + 0x16ca0) < 1) {
      if ((((*(long *)(lVar6 + 0x16b90) != 0) &&
           (puVar8 = *(uint **)(*(long *)(lVar6 + 0x16b90) + 8), puVar8 != (uint *)0x0)) &&
          ((*(uint *)(lVar6 + 0x16ba8) < 9 || (*(char *)(*(long *)(lVar6 + 0x16bb0) + 8) != '\0'))))
         && (((8 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
        iVar5 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          iVar5 = 0x1c;
        }
        puVar7 = (undefined4 *)
                 ((ulong)(puVar8[1] * 8 + (uint)(ushort)puVar8[2] * 8 + iVar5) + (long)puVar8);
        goto joined_r0x01f46594;
      }
    }
    else if (8 < *(uint *)(lVar6 + 0x16ca0)) {
      if (*(uint *)(lVar6 + 0x16c90) < 9) {
        uVar4 = 0;
      }
      puVar7 = *(undefined4 **)(*(long *)(lVar6 + 0x16c98) + (ulong)uVar4 * 8);
joined_r0x01f46594:
      if (puVar7 != (undefined4 *)0x0) goto LAB_01f465a0;
    }
  }
  puVar7 = &DAT_053dce00;
LAB_01f465a0:
  bVar2 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
  if (bVar2 < 5) {
    iVar5 = 5;
  }
  else if (bVar2 < 8) {
    iVar5 = 0;
  }
  else if (bVar2 < 0xc) {
    iVar5 = 1;
  }
  else if (bVar2 < 0x10) {
    iVar5 = 2;
  }
  else {
    iVar5 = 3;
    if (0x12 < bVar2) {
      iVar5 = 4;
    }
  }
  iVar5 = (*(code *)(&PTR_LAB_04a71bb8)[(long)iVar5 * 2])(puVar7);
  if (iVar5 == 0) {
    puVar8 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar4 = *puVar8 ^ *puVar8 << 0xb;
    uVar1 = puVar8[3];
    *puVar8 = puVar8[1];
    puVar8[1] = puVar8[2];
    uVar4 = uVar4 >> 8 ^ uVar1 >> 0x13 ^ uVar4 ^ uVar1;
    puVar8[2] = uVar1;
    puVar8[3] = uVar4;
    piVar9 = (int *)(**(code **)(*(long *)(*(long *)puVar3 + 0x2178) + 0xf0))
                              (*(long *)puVar3 + 0x2178);
    if ((int)((ulong)uVar4 * 100 >> 0x20) < *piVar9) {
      return 1;
    }
  }
  return 0;
}

