
bool FUN_0231e7ec(long param_1,ulong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  byte bVar7;
  bool bVar8;
  ushort uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined **local_88;
  undefined4 local_80;
  undefined4 local_7c;
  long local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined1 local_49;
  undefined2 uStack_48;
  char cStack_46;
  undefined4 local_44;
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bb37e0;
  if (param_3 != (undefined4 *)0x0) {
    *(undefined2 *)param_3 = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined *)((long)param_3 + 2) = puVar3[2];
    *(undefined *)((long)param_3 + 3) = puVar3[3];
    param_3[1] = *(undefined4 *)(puVar3 + 4);
  }
  local_70 = *(undefined4 *)puVar3;
  uStack_6c = *(undefined4 *)(puVar3 + 4);
  local_44 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_49 = 0;
  uStack_48 = 0;
  cStack_46 = '\0';
  local_68 = &DAT_048f9750;
  uStack_60 = 0;
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar5 = FUN_01503f54(&local_70);
    if ((uVar5 & 1) == 0) {
      return false;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x1810) == 7) {
      bVar7 = *(byte *)(param_1 + 0x1ee8);
      local_78 = (ulong)local_78._2_6_ << 0x10;
      puVar1 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)(param_1 + 0x4c8);
      }
      local_80 = *(undefined4 *)(puVar1 + 0x50);
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      local_88 = (undefined **)puVar1[0x4f];
      local_7c = *(undefined4 *)((long)puVar1 + 0x2b4);
      local_78 = CONCAT71(local_78._1_7_,bVar7);
      local_24 = 2;
      uVar5 = FUN_01508a18(&local_70,&local_88,&local_24);
    }
    else {
      local_78 = (ulong)local_78._2_6_ << 0x10;
      bVar7 = *(byte *)(param_1 + 0x1ee8);
      puVar1 = &DAT_054e9a58;
      if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
        puVar1 = *(undefined8 **)(param_1 + 0x4c8);
      }
      local_80 = *(undefined4 *)(puVar1 + 0x50);
      local_88 = (undefined **)puVar1[0x4f];
      local_7c = *(undefined4 *)((long)puVar1 + 0x2b4);
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      local_78 = CONCAT71(local_78._1_7_,bVar7);
      uVar5 = FUN_01507210(&local_70,&local_88);
    }
    if ((uVar5 & 1) == 0) {
      return false;
    }
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_70);
  lVar11 = *(long *)puVar3;
  if (lVar11 == 0) {
    return false;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar4) {
    return false;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return false;
  }
  local_78 = 0;
  local_80 = local_70;
  local_7c = uStack_6c;
  local_88 = &PTR_FUN_04a36b50;
  uVar4 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar3 == 0) {
    if ((param_2 & 1) == 0) {
      return false;
    }
    uVar9 = 0xbc;
    goto LAB_0231eaec;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (uVar4 < *(uint *)(lVar11 + 0x1d8)) {
    puVar6 = (uint *)0x0;
    if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0) goto LAB_0231eac0;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(&local_70);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (*(uint *)(lVar11 + 0x1d8) <= uVar4) goto LAB_0231eabc;
    puVar6 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
    if (puVar6 == (uint *)0x0) goto LAB_0231eac0;
    uVar4 = *puVar6;
    bVar8 = false;
    if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
      puVar10 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
      bVar8 = false;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar6 - lVar11) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326d48) && (*(short *)(DAT_05326d50 + (long)(int)uVar2 * 2) == 0x15))
            {
              if (param_3 != (undefined4 *)0x0) {
                *param_3 = local_70;
                param_3[1] = uStack_6c;
              }
              return true;
            }
          }
        }
        bVar8 = false;
      }
    }
  }
  else {
LAB_0231eabc:
    puVar6 = (uint *)0x0;
LAB_0231eac0:
    bVar8 = true;
  }
  if ((param_2 & 1) == 0) {
    return false;
  }
  if (bVar8) {
    uVar9 = 0xbc;
  }
  else {
    uVar4 = *puVar6;
    uVar9 = 0;
    if ((uVar4 != 0) && (puVar6 != (uint *)(ulong)uVar4)) {
      puVar10 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar6 - lVar11) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar9 < 0xbd))
            goto LAB_0231eaec;
          }
        }
        uVar9 = 0;
      }
    }
  }
LAB_0231eaec:
  if (uVar9 == 0xa0) {
    return cStack_46 == '\0';
  }
  return false;
}

