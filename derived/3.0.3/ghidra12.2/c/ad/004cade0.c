
void FUN_004cade0(undefined8 *param_1,long param_2,int param_3)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long local_80;
  long lStack_78;
  long local_70;
  long local_68;
  undefined8 local_58;
  
  iVar4 = (int)param_2;
  iVar9 = param_3 - iVar4;
  if (iVar9 < 1) {
    uVar11 = 0;
    uVar10 = 0;
    if (iVar9 < 2) goto LAB_004cae9c;
LAB_004cae4c:
    lVar12 = 0;
    iVar14 = (param_3 + -1) - iVar4;
    do {
      if (*(char *)(param_2 + iVar14) != ' ' && *(char *)(param_2 + iVar14) != '\t') break;
      lVar12 = lVar12 + 1;
      iVar14 = iVar14 + -1;
    } while ((long)(int)uVar11 + 1 + lVar12 < (long)iVar9);
  }
  else {
    lVar12 = 0;
    do {
      if (*(char *)(param_2 + lVar12) != ' ' && *(char *)(param_2 + lVar12) != '\t') break;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar9);
    uVar11 = (uint)lVar12;
    uVar10 = uVar11;
    if ((int)(uVar11 + 1) < iVar9) goto LAB_004cae4c;
LAB_004cae9c:
    uVar11 = uVar10;
    lVar12 = 0;
  }
  iVar14 = (int)lVar12;
  uVar10 = (iVar9 - uVar11) - iVar14;
  param_2 = param_2 + (ulong)uVar11;
  lVar12 = (long)(int)uVar10;
  local_68 = param_2 + lVar12;
  local_70 = param_2;
  puVar6 = (undefined8 *)FUN_00438810(0x20);
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined4 *)((long)puVar6 + 0x14) = 0x80000000;
  *puVar6 = 0;
  puVar6[1] = 0;
  *param_1 = puVar6;
  cVar2 = *(char *)(param_2 + ((long)(((ulong)uVar10 << 0x20) + -0x100000000) >> 0x20));
  if (cVar2 == '*') {
    lStack_78 = param_2 + ((long)(((ulong)uVar10 << 0x20) + -0x200000000) >> 0x20);
    local_80 = param_2;
    iVar4 = FUN_00429b70(&local_80,&PTR_DAT_04868838);
    if ((iVar4 == 0) || (iVar4 = FUN_00429b70(&local_80,&PTR_s_const_char_04868848), iVar4 == 0)) {
      *(undefined4 *)((long)puVar6 + 0x1c) = 0;
      lVar12 = local_80;
      lVar8 = lStack_78;
      goto LAB_004cb0d8;
    }
    *(undefined4 *)((long)puVar6 + 0x1c) = 3;
    lVar12 = local_80;
    lVar8 = lStack_78;
  }
  else {
    if (cVar2 == '>') {
      if ((int)uVar10 < 1) {
        iVar4 = -1;
      }
      else {
        iVar9 = 0;
        iVar4 = (((param_3 + -1) - uVar11) - iVar14) - iVar4;
        do {
          while (cVar2 = *(char *)(param_2 + -1 + lVar12), cVar2 != '<') {
            if (cVar2 == '>') {
              iVar9 = iVar9 + 1;
            }
            lVar12 = lVar12 + -1;
            iVar4 = iVar4 + -1;
            if (lVar12 < 1) goto LAB_004cb028;
          }
          iVar9 = iVar9 + -1;
          if (iVar9 == 0) goto LAB_004cb1dc;
          lVar12 = lVar12 + -1;
          iVar4 = iVar4 + -1;
        } while (0 < lVar12);
LAB_004cb028:
        iVar4 = -1;
      }
LAB_004cb1dc:
      iVar9 = (uVar10 - 3) - iVar4;
      *(undefined4 *)((long)puVar6 + 0x1c) = 4;
      FUN_0043bf00(puVar6,param_2,param_2 + iVar4);
      puVar3 = PTR_DAT_048607b8;
      if (iVar9 == 0) {
        return;
      }
      lVar8 = param_2 + iVar4 + 1;
      lVar12 = lVar8 + iVar9;
      do {
        iVar4 = (int)lVar12 - (int)lVar8;
        if (iVar4 < 1) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          iVar9 = 0;
          do {
            while (cVar2 = *(char *)(lVar8 + uVar13), cVar2 == '>') {
              iVar9 = iVar9 + -1;
              uVar13 = uVar13 + 1;
              if ((long)iVar4 <= (long)uVar13) goto LAB_004cb2a8;
            }
            if (cVar2 == '<') {
              iVar9 = iVar9 + 1;
            }
            else if (iVar9 == 0) {
              if (cVar2 == ',') break;
              iVar9 = 0;
            }
            uVar13 = uVar13 + 1;
          } while ((long)uVar13 < (long)iVar4);
        }
LAB_004cb2a8:
        FUN_004cade0(&local_80,lVar8,lVar8 + (uVar13 & 0xffffffff));
        uVar10 = *(uint *)(puVar6 + 2);
        if (uVar10 == (*(uint *)((long)puVar6 + 0x14) & 0x3fffffff)) {
          FUN_00426990(puVar3,puVar6 + 1,8);
          uVar10 = *(uint *)(puVar6 + 2);
        }
        *(long *)(puVar6[1] + (long)(int)uVar10 * 8) = local_80;
        local_80 = 0;
        *(uint *)(puVar6 + 2) = uVar10 + 1;
        FUN_004cb350(&local_80);
        iVar9 = (int)uVar13;
        lVar1 = lVar8 + (ulong)(iVar9 + 1);
        lVar12 = lVar8;
        if (iVar9 + 2 < iVar4) {
          lVar12 = lVar1 + ((iVar4 + -2) - iVar9);
          lVar8 = lVar1;
        }
        if (lVar8 == lVar12) {
          return;
        }
      } while( true );
    }
    if (cVar2 != ']') {
      iVar4 = FUN_00429b70(&local_70,&PTR_s_hkVariantArray_04868858);
      if ((iVar4 == 0) ||
         (iVar4 = FUN_00429b70(&local_70,&PTR_s_hkReflect_Any_04868868), iVar4 == 0)) {
        *(undefined4 *)((long)puVar6 + 0x1c) = 1;
        uVar10 = *(uint *)(puVar6 + 2);
        if (uVar10 == (*(uint *)((long)puVar6 + 0x14) & 0x3fffffff)) {
          FUN_00426990(PTR_DAT_048607b8,puVar6 + 1,8);
          uVar10 = *(uint *)(puVar6 + 2);
        }
        *(undefined8 *)(puVar6[1] + (long)(int)uVar10 * 8) = 0;
        *(uint *)(puVar6 + 2) = uVar10 + 1;
      }
      iVar4 = FUN_00429b70(&local_70,&PTR_s_hkVariant_04868878);
      if ((iVar4 == 0) ||
         (iVar4 = FUN_00429b70(&local_70,&PTR_s_hkReflect_Var_04868888), iVar4 == 0)) {
        *(undefined4 *)((long)puVar6 + 0x1c) = 3;
        uVar10 = *(uint *)(puVar6 + 2);
        if (uVar10 == (*(uint *)((long)puVar6 + 0x14) & 0x3fffffff)) {
          FUN_00426990(PTR_DAT_048607b8,puVar6 + 1,8);
          uVar10 = *(uint *)(puVar6 + 2);
        }
        *(undefined8 *)(puVar6[1] + (long)(int)uVar10 * 8) = 0;
        *(uint *)(puVar6 + 2) = uVar10 + 1;
        return;
      }
      *(undefined4 *)((long)puVar6 + 0x1c) = 0;
      lVar12 = local_70;
      lVar8 = local_68;
LAB_004cb0d8:
      FUN_0043bf00(puVar6,lVar12,lVar8);
      return;
    }
    if ((int)uVar10 < 1) {
      iVar4 = -1;
    }
    else {
      iVar9 = 0;
      iVar4 = (((param_3 + -1) - uVar11) - iVar14) - iVar4;
      do {
        while (cVar2 = *(char *)(param_2 + -1 + lVar12), cVar2 != '[') {
          if (cVar2 == ']') {
            iVar9 = iVar9 + 1;
          }
          lVar12 = lVar12 + -1;
          iVar4 = iVar4 + -1;
          if (lVar12 < 1) goto LAB_004caf70;
        }
        iVar9 = iVar9 + -1;
        if (iVar9 == 0) goto LAB_004cb130;
        lVar12 = lVar12 + -1;
        iVar4 = iVar4 + -1;
      } while (0 < lVar12);
LAB_004caf70:
      iVar4 = -1;
    }
LAB_004cb130:
    local_80 = param_2 + iVar4 + 1;
    lStack_78 = local_80 + (int)((uVar10 - 3) - iVar4);
    uVar7 = FUN_00429d70(&local_80);
    uVar5 = FUN_0043a2f0(uVar7,0);
    FUN_0043a3c0(uVar7);
    *(undefined4 *)(puVar6 + 3) = uVar5;
    *(undefined4 *)((long)puVar6 + 0x1c) = 2;
    lVar12 = local_70;
    lVar8 = local_70 + iVar4 + -1;
  }
  FUN_004cade0(&local_58,lVar12,lVar8);
  uVar10 = *(uint *)(puVar6 + 2);
  if (uVar10 == (*(uint *)((long)puVar6 + 0x14) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,puVar6 + 1,8);
    uVar10 = *(uint *)(puVar6 + 2);
  }
  *(undefined8 *)(puVar6[1] + (long)(int)uVar10 * 8) = local_58;
  local_58 = 0;
  *(uint *)(puVar6 + 2) = uVar10 + 1;
  FUN_004cb350(&local_58);
  return;
}

