
void FUN_0124d4b4(undefined8 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  char cVar7;
  uint *puVar8;
  int *piVar9;
  undefined2 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  long lVar13;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  uint *local_58;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar10 = *(undefined2 *)param_2;
  uVar11 = *(undefined1 *)((long)param_2 + 2);
  uVar12 = *(undefined1 *)((long)param_2 + 3);
  local_38 = *param_2;
  uVar5 = param_2[1];
  lVar13 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar13 == 0) || (*(long *)(lVar13 + 0xb0) == 0)) ||
       (*(long *)(*(long *)(lVar13 + 0xb0) + 8) == 0)) ||
      ((*(long *)(lVar13 + 0x488) == 0 || (*(long *)(*(long *)(lVar13 + 0x488) + 8) == 0)))) ||
     ((*(long *)(lVar13 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar13 + 0x2b0) + 8) == 0))))
  goto LAB_0124d8b8;
  local_34 = uVar5;
  uVar3 = FUN_0277d6c4();
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if ((*(uint *)(lVar13 + 0x1d8) <= uVar3) ||
     (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0124d8b8;
  FUN_0124c030(auStack_68,param_2);
  iVar4 = FUN_0123db50(auStack_60,local_58);
  if (iVar4 - 0x23U < 9) {
    iVar4 = FUN_0277d6c4(param_2);
    if (iVar4 == 0xecc1) {
      *param_1 = 0xecc1;
      FUN_0277d4ac(param_1);
      return;
    }
    iVar4 = FUN_0123db50(auStack_60,local_58);
    if ((8 < iVar4 - 0x23U) || (uVar6 = FUN_0123d890(local_58,0), (uVar6 & 1) != 0)) {
      FUN_0124d940(auStack_68,3,0,0);
    }
    FUN_0124c70c(auStack_68,&local_38);
  }
  else {
    iVar4 = FUN_0123db50(auStack_60,local_58);
    if (iVar4 - 0x12U < 6) {
      uVar5 = FUN_0123db50(auStack_60,local_58);
      switch(uVar5) {
      case 0x12:
        local_70 = 0xa59;
        break;
      case 0x13:
        local_70 = 0xbd6;
        break;
      case 0x14:
        local_70 = 0xbdb;
        break;
      case 0x15:
        local_70 = 0xbe0;
        break;
      case 0x16:
        local_70 = 0xbe5;
        break;
      case 0x17:
        local_70 = 0x33ab;
        break;
      default:
        goto switchD_0124d600_default;
      }
    }
    else {
      uVar6 = FUN_0123d890(local_58,4);
      if ((uVar6 & 1) == 0) {
        uVar3 = FUN_0123db50(auStack_60,local_58);
        puVar2 = PTR_DAT_04bbbc78;
        puVar1 = PTR_DAT_04bbbc70;
        if ((uVar3 < 0x21) && ((1L << ((ulong)uVar3 & 0x3f) & 0x1000006aaU) != 0)) {
          if ((local_58 != (uint *)0x0) && (*local_58 != 0)) {
            cVar7 = *PTR_DAT_04bbbc70;
            do {
              if (cVar7 == '\0') {
                cVar7 = '\x01';
                *(undefined8 *)puVar2 = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                *puVar1 = 1;
                *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
                *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
              }
              else {
                uVar3 = *(uint *)(puVar2 + 0x4c);
                if (-1 < (int)uVar3) {
                  if (((char *)((ulong)uVar3 + (long)local_58) != (char *)0x0) &&
                     (*(char *)((ulong)uVar3 + (long)local_58) != '\0')) goto LAB_0124d7ac;
                  break;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar8 = (uint *)(ulong)*local_58;
              if ((*local_58 == 0) || (local_58 == puVar8)) break;
              lVar13 = 0xc;
              if (*(char *)((long)local_58 + (10 - (long)puVar8)) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)local_58 + (lVar13 - (long)puVar8);
              if (lVar13 == 0) break;
              uVar6 = (ulong)*(ushort *)((long)local_58 + (8 - (long)puVar8));
              *(undefined4 *)(puVar2 + 0x4c) = 0xfffffffe;
              if (uVar6 == 0) break;
              piVar9 = (int *)(lVar13 + 4);
              while (piVar9[-1] != -0xa58ccc9) {
                piVar9 = piVar9 + 2;
                uVar6 = uVar6 - 1;
                if (uVar6 == 0) goto LAB_0124d844;
              }
              iVar4 = 0;
              if (*piVar9 != -1) {
                iVar4 = *piVar9;
              }
              *(int *)(puVar2 + 0x4c) = iVar4;
              if (*local_58 == 0) break;
            } while( true );
          }
          goto LAB_0124d844;
        }
LAB_0124d7ac:
        iVar4 = FUN_0123db50(auStack_60,local_58);
        if ((iVar4 - 2U & 0xfffffff9) != 0) {
          iVar4 = FUN_0123db50(auStack_60,local_58);
          if (iVar4 - 0xbU < 7) {
            local_70 = 0xeca;
          }
          else {
            iVar4 = FUN_0123db50(auStack_60,local_58);
            if (iVar4 != 0x2e) goto switchD_0124d600_default;
            local_70 = 0x9c6;
          }
          goto LAB_0124d894;
        }
        uVar5 = FUN_0123db50(auStack_60,local_58);
        switch(uVar5) {
        case 2:
          goto switchD_0124d874_caseD_1;
        default:
          goto switchD_0124d600_default;
        case 4:
          goto switchD_0124d874_caseD_3;
        case 6:
          goto switchD_0124d874_caseD_5;
        case 8:
          goto switchD_0124d874_caseD_7;
        }
      }
LAB_0124d844:
      uVar5 = FUN_0123db50(auStack_60,local_58);
      switch(uVar5) {
      case 1:
      case 9:
      case 10:
      case 0x20:
switchD_0124d874_caseD_1:
        local_70 = 0x1420;
        break;
      default:
        goto switchD_0124d600_default;
      case 3:
switchD_0124d874_caseD_3:
        local_70 = 0x141f;
        break;
      case 5:
switchD_0124d874_caseD_5:
        local_70 = 0xaf6;
        break;
      case 7:
switchD_0124d874_caseD_7:
        local_70 = 0xafb;
      }
    }
LAB_0124d894:
    FUN_0277d4ac(&local_70);
    local_38 = (undefined4)local_70;
    local_34 = local_70._4_4_;
  }
switchD_0124d600_default:
  uVar10 = (undefined2)local_38;
  uVar11 = local_38._2_1_;
  uVar12 = local_38._3_1_;
  uVar5 = local_34;
LAB_0124d8b8:
  *(undefined2 *)param_1 = uVar10;
  *(undefined1 *)((long)param_1 + 2) = uVar11;
  *(undefined1 *)((long)param_1 + 3) = uVar12;
  *(undefined4 *)((long)param_1 + 4) = uVar5;
  return;
}

