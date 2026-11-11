
uint FUN_0049c130(long *param_1,byte *param_2)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  undefined1 local_58 [16];
  byte *local_48;
  
  uVar13 = 0;
  if (param_2 != (byte *)0x0) {
    local_48 = param_2;
    uVar9 = FUN_00428440(param_2);
    if (((uVar9 & 0x1f) == 1) && (iVar5 = FUN_00426fc0(param_2), iVar5 != 0)) {
      param_2 = &DAT_04c161d0;
    }
    plVar14 = (long *)*param_1;
    local_48 = param_2;
    lVar10 = FUN_0049cee0(plVar14,&local_48);
    if (lVar10 != 0) {
      lVar12 = *plVar14;
      if (lVar12 + (long)*(int *)(lVar10 + 4) * 0x10 != 0) {
        return *(uint *)(lVar12 + (long)*(int *)(lVar10 + 4) * 0x10 + 8);
      }
    }
    lVar10 = *param_1;
    uVar13 = *(uint *)(lVar10 + 0x48);
    if ((*local_48 >> 3 & 1) != 0) {
      plVar14 = (long *)(lVar10 + 0x20);
      local_58 = FUN_004273b0();
      uVar7 = FUN_0049ccd0(plVar14,local_58);
      uVar6 = *(uint *)(lVar10 + 0x28);
      if (uVar6 == uVar7) {
        uVar11 = uVar7;
        if ((*(uint *)(lVar10 + 0x2c) & 0x3fffffff) == uVar7) {
          FUN_00426990(PTR_DAT_048607b8,plVar14,0x20);
          uVar11 = *(uint *)(lVar10 + 0x28);
        }
        pauVar2 = (undefined1 (*) [16])(*(long *)(lVar10 + 0x20) + (long)(int)uVar11 * 0x20);
        *pauVar2 = local_58;
        pauVar2[1][8] = 0;
        *(undefined4 *)(pauVar2[1] + 4) = 0;
        *(uint *)(lVar10 + 0x28) = uVar11 + 1;
      }
      pbVar4 = local_48;
      lVar10 = *plVar14;
      uVar9 = FUN_00428440(local_48);
      if ((pbVar4 == (byte *)0x0) || ((uVar9 & 0x1f) != 1)) {
        uVar8 = FUN_004514d0(*param_1 + 0x68,local_48);
        bVar3 = true;
      }
      else {
        uVar8 = 0;
        bVar3 = false;
      }
      lVar10 = lVar10 + (long)(int)uVar7 * 0x20;
      if (uVar6 == uVar7) {
        *(uint *)(lVar10 + 0x10) = uVar13;
        if (bVar3) {
          if (*(char *)(lVar10 + 0x18) == '\0') {
            *(undefined4 *)(lVar10 + 0x14) = uVar8;
            *(char *)(lVar10 + 0x18) = '\x01';
          }
          else {
            *(undefined4 *)(lVar10 + 0x14) = uVar8;
          }
        }
        else if (*(char *)(lVar10 + 0x18) != '\0') {
          *(char *)(lVar10 + 0x18) = '\0';
        }
      }
      else {
        uVar13 = *(uint *)(lVar10 + 0x10);
        if ((bVar3) && (*(char *)(lVar10 + 0x18) == '\0')) {
          *(undefined4 *)(lVar10 + 0x14) = uVar8;
          *(char *)(lVar10 + 0x18) = '\x01';
          *(byte **)(*(long *)(*param_1 + 0x40) + (long)(int)uVar13 * 8) = local_48;
        }
      }
    }
    plVar14 = (long *)*param_1;
    uVar6 = FUN_0047d820(plVar14,&local_48);
    if (*(uint *)(plVar14 + 1) == uVar6) {
      if ((*(uint *)((long)plVar14 + 0xc) & 0x3fffffff) == uVar6) {
        FUN_00426990(PTR_DAT_048607b8,plVar14,0x10);
        uVar6 = *(uint *)(plVar14 + 1);
      }
      puVar1 = (undefined8 *)(*plVar14 + (long)(int)uVar6 * 0x10);
      *puVar1 = local_48;
      *(uint *)(puVar1 + 1) = uVar13;
      *(uint *)(plVar14 + 1) = uVar6 + 1;
      lVar10 = *param_1;
      uVar6 = *(uint *)(lVar10 + 0x48);
    }
    else {
      *(uint *)(*plVar14 + ((long)((ulong)uVar6 << 0x20) >> 0x1c) + 8) = uVar13;
      lVar10 = *param_1;
      uVar6 = *(uint *)(lVar10 + 0x48);
    }
    if (uVar13 == uVar6) {
      uVar6 = uVar13;
      if (uVar13 == (*(uint *)(lVar10 + 0x4c) & 0x3fffffff)) {
        FUN_00426990(PTR_DAT_048607b8,lVar10 + 0x40,8);
        uVar6 = *(uint *)(lVar10 + 0x48);
      }
      *(byte **)(*(long *)(lVar10 + 0x40) + (long)(int)uVar6 * 8) = local_48;
      *(uint *)(lVar10 + 0x48) = uVar6 + 1;
    }
  }
  return uVar13;
}

