
undefined8 FUN_01c14070(long *param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ushort *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ushort *puVar12;
  undefined *local_68;
  ushort *puStack_60;
  undefined4 local_58;
  ushort local_54 [16];
  uint local_34;
  
  lVar6 = *(long *)(param_2 + 8);
  if (lVar6 == 0) {
    return 0;
  }
  local_54[0] = 0;
  puStack_60 = local_54;
  local_58 = 0xb;
  lVar7 = 0;
  local_68 = &DAT_04a3fbd8;
  lVar11 = 0x14;
  while (lVar10 = lVar11, lVar7 != 0x7fffffff) {
    pbVar1 = (byte *)(lVar6 + 1 + lVar7);
    bVar2 = *pbVar1;
    uVar8 = (ushort)bVar2;
    if (bVar2 == 0) break;
    if ((char)bVar2 < '\0') {
      uVar8 = (ushort)bVar2;
      if ((uVar8 & 0xe0) == 0xc0) {
        if (pbVar1[1] == 0) break;
        uVar8 = pbVar1[1] & 0x3f | (uVar8 & 0x1f) << 6;
        lVar11 = 2;
      }
      else {
        if ((((uVar8 & 0xf0) != 0xe0) || (pbVar1[1] == 0)) || (pbVar1[2] == 0)) break;
        uVar8 = (ushort)bVar2 << 0xc | (pbVar1[1] & 0x3f) << 6 | pbVar1[2] & 0x3f;
        lVar11 = 3;
      }
    }
    else {
      lVar11 = 1;
    }
    *(ushort *)((long)&local_68 + lVar10) = uVar8;
    lVar7 = lVar11 + lVar7;
    lVar11 = lVar10 + 2;
    if (lVar10 + 2 == 0x2a) break;
  }
  *(undefined2 *)((long)&local_68 + lVar10) = 0;
  local_54[10] = 0;
  local_34 = (uint)*(byte *)(lVar6 + 0x20);
  *(undefined4 *)(param_1 + 0x1f) = 2;
  puVar4 = (ushort *)(**(code **)(*param_1 + 0x10))(param_1);
  uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
  puVar12 = puVar4 + ((uVar5 & 0xffffffff) - 1);
  (**(code **)(*param_1 + 0x38))(param_1);
  bVar3 = false;
  lVar6 = 0x14;
  do {
    uVar8 = *(ushort *)((long)&local_68 + lVar6);
    bVar3 = (bool)(bVar3 | uVar8 == 0);
    if ((lVar6 != 0x28) && (!bVar3)) {
      if ((uVar8 & 0xfffe) == 0xe) {
LAB_01c14258:
        (**(code **)(*param_1 + 0x38))(param_1);
        return 0;
      }
      uVar9 = (uint)uVar8;
      if ((((uVar8 & 0xfffe) == 0xfe0e) || ((uVar9 & 0xf800) == 0xd800)) ||
         ((uVar9 == 0x7f ||
          (((uVar9 - 1 < 0x1f && uVar9 - 0xb < 0xfffffffe || (uVar8 == 0xfeff)) || (uVar8 == 0xfffe)
           ))))) goto LAB_01c14258;
      if ((puVar4 != (ushort *)0x0) && (puVar4 + 1 <= puVar12)) {
        *puVar4 = uVar8;
        puVar4 = puVar4 + 1;
      }
    }
    lVar6 = lVar6 + 2;
    if (lVar6 == 0x2a) {
      if ((-1 < (int)local_34) && ((int)local_34 < 4)) {
        *(uint *)(param_1 + 0x1f) = local_34;
      }
      return 1;
    }
  } while( true );
}

