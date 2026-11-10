
undefined8 FUN_001734e8(long param_1,long param_2,long param_3,long *param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  
  iVar4 = FUN_00168900(*(undefined8 *)(*param_4 + 0x10),*(undefined8 *)(*param_4 + 0x18));
  if (iVar4 == 0) {
    lVar11 = *param_4;
    lVar8 = *(long *)(lVar11 + 0x18);
    if (lVar8 != 0) {
      if (**(char **)(lVar11 + 0x10) == ':') {
        return 0xfffffded;
      }
      pbVar10 = *(byte **)(lVar11 + 0x10);
      do {
        if (0xffffffe5 < *pbVar10 - 0x5b) {
          return 0xfffffded;
        }
        lVar8 = lVar8 + -1;
        pbVar10 = pbVar10 + 1;
      } while (lVar8 != 0);
    }
LAB_00173660:
    uVar6 = *(ushort *)(param_2 + 0xe2);
    uVar5 = 0xffffff97;
    goto LAB_00173668;
  }
  iVar4 = (int)param_4[2];
  if (iVar4 == 0x25) {
LAB_00173538:
    lVar8 = *(long *)(param_4[1] + 0x18);
    if (lVar8 != 0) {
      pbVar10 = *(byte **)(param_4[1] + 0x10);
      do {
        if ((&DAT_04107340)[*pbVar10] == '\0') goto LAB_0017364c;
        pbVar10 = pbVar10 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  else if (iVar4 == 5) {
    lVar8 = *(long *)(param_4[1] + 0x18);
    if ((lVar8 == 0) ||
       (pbVar10 = *(byte **)(param_4[1] + 0x10), 0x19 < (*pbVar10 & 0xffffffdf) - 0x41)) {
LAB_0017364c:
      if (**(char **)(*param_4 + 0x10) == ':') {
        return 0xfffffded;
      }
      goto LAB_00173660;
    }
    lVar8 = lVar8 + -1;
    if (lVar8 != 0) {
      do {
        pbVar10 = pbVar10 + 1;
        bVar2 = *pbVar10;
        if ((9 < bVar2 - 0x30 && 0x19 < (bVar2 & 0xffffffdf) - 0x41) &&
           ((0x2e < bVar2 || ((1L << ((ulong)bVar2 & 0x3f) & 0x680000000000U) == 0))))
        goto LAB_0017364c;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  else {
    if (iVar4 == 0) goto LAB_00173538;
    iVar4 = FUN_0016894c(*(undefined8 *)(param_4[1] + 0x10),*(undefined8 *)(param_4[1] + 0x18));
    if (iVar4 == 0) goto LAB_0017364c;
  }
  if (*(char *)(param_1 + 0x9aa) == '\0') {
    if (*(char *)(param_3 + 0xc) == '\x05') {
      bVar3 = false;
      goto LAB_00173684;
    }
    if (**(char **)(*param_4 + 0x10) == ':') {
      if (param_5 != 0) {
        return 0xfffffded;
      }
      if ((*(ushort *)(param_2 + 0xe2) >> 6 & 1) != 0) {
        return 0xfffffded;
      }
    }
    iVar4 = (int)param_4[2];
    if (iVar4 < 0x3d) {
      if (iVar4 == 7) {
        iVar4 = FUN_00173ec4(param_2,param_4,0x20);
        if (iVar4 == 0) {
          return 0xfffffded;
        }
        if (*(long *)(param_4[1] + 0x18) != 3) {
          return 0xfffffded;
        }
        lVar8 = 0;
        lVar11 = 0;
        do {
          uVar7 = (uint)*(byte *)(*(long *)(param_4[1] + 0x10) + lVar8);
          if (uVar7 - 0x3a < 0xfffffff6 || 0xccccccccccccccc < lVar11) {
LAB_00173bac:
            *(undefined2 *)(param_2 + 0xe0) = 0xffff;
            return 0xfffffded;
          }
          uVar13 = (ulong)(uVar7 - 0x30);
          if ((long)(uVar13 ^ 0x7fffffffffffffff) < lVar11 * 10) goto LAB_00173bac;
          lVar8 = lVar8 + 1;
          lVar11 = uVar13 + lVar11 * 10;
        } while (lVar8 != 3);
        uVar7 = (uint)lVar11 & 0xffff;
        *(short *)(param_2 + 0xe0) = (short)lVar11;
        if (uVar7 == 0x65 || uVar7 == 0xffff) {
          return 0xfffffded;
        }
        goto LAB_00173b84;
      }
      if (iVar4 != 0x1b) {
        if (iVar4 == 0x38) {
          return 0xfffffded;
        }
        goto LAB_00173a80;
      }
      uVar6 = *(ushort *)(param_2 + 0xe0);
      if (uVar6 == 0xcc) {
        if (*(long *)(param_2 + 0x40) != -1) {
          return 0xfffffded;
        }
        if (*(long *)(param_4[1] + 0x18) != 1) {
          return 0xfffffded;
        }
        bVar2 = **(byte **)(param_4[1] + 0x10);
        uVar7 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar7 = (uint)bVar2;
        }
        if ((uVar7 & 0xff) == 0x30) {
          *(undefined8 *)(param_2 + 0x40) = 0;
          return 0xffffff96;
        }
        return 0xfffffded;
      }
      if (uVar6 - 100 < 100) {
        return 0xfffffded;
      }
      if ((uVar6 - 200 < 100) && ((*(ushort *)(param_2 + 0xe2) >> 7 & 1) != 0)) {
        return 0xffffff96;
      }
      if (*(long *)(param_2 + 0x40) != -1) {
        return 0xfffffded;
      }
LAB_00173980:
      lVar8 = FUN_00173f14(*(undefined8 *)(param_4[1] + 0x10),*(undefined8 *)(param_4[1] + 0x18));
      *(long *)(param_2 + 0x40) = lVar8;
      if (lVar8 == -1) {
        return 0xfffffded;
      }
    }
    else {
      if (iVar4 - 0x3eU < 4) {
        return 0xfffffded;
      }
      if (iVar4 == 0x3d) {
        if (*(long *)(param_4[1] + 0x18) != 8) {
          return 0xfffffded;
        }
        lVar8 = 0;
        do {
          bVar2 = "trailers"[lVar8];
          uVar7 = bVar2 + 0x20;
          if (0x19 < bVar2 - 0x41) {
            uVar7 = (uint)bVar2;
          }
          bVar2 = *(byte *)(*(long *)(param_4[1] + 0x10) + lVar8);
          uVar12 = bVar2 + 0x20;
          if (0x19 < bVar2 - 0x41) {
            uVar12 = (uint)bVar2;
          }
          if ((uVar7 & 0xff) != (uVar12 & 0xff)) {
            return 0xfffffded;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 != 8);
      }
      else {
LAB_00173a80:
        if (**(char **)(*param_4 + 0x10) == ':') {
          return 0xfffffded;
        }
      }
    }
    goto LAB_00173b84;
  }
  bVar3 = *(char *)(param_1 + 0x9a9) != '\0';
LAB_00173684:
  if (**(char **)(*param_4 + 0x10) == ':') {
    if (param_5 != 0) {
      return 0xfffffded;
    }
    if ((*(ushort *)(param_2 + 0xe2) >> 6 & 1) != 0) {
      return 0xfffffded;
    }
  }
  iVar4 = (int)param_4[2];
  if (0x37 < iVar4) {
    switch(iVar4) {
    case 0x38:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
      return 0xfffffded;
    default:
      goto switchD_001736d4_caseD_39;
    case 0x3d:
      if (*(long *)(param_4[1] + 0x18) != 8) {
        return 0xfffffded;
      }
      lVar8 = 0;
      do {
        bVar2 = "trailers"[lVar8];
        uVar7 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar7 = (uint)bVar2;
        }
        bVar2 = *(byte *)(*(long *)(param_4[1] + 0x10) + lVar8);
        uVar12 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar12 = (uint)bVar2;
        }
        if ((uVar7 & 0xff) != (uVar12 & 0xff)) {
          return 0xfffffded;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 8);
      break;
    case 0x42:
      if (!bVar3) {
        return 0xfffffded;
      }
      uVar5 = 0x8000;
      goto LAB_0017395c;
    }
    goto LAB_00173b84;
  }
  switch(iVar4) {
  case 0:
    uVar5 = 1;
    goto LAB_0017395c;
  case 1:
    iVar4 = FUN_00173ec4(param_2,param_4,4);
    if (iVar4 == 0) {
      return 0xfffffded;
    }
    lVar8 = param_4[1];
    if (*(long *)(lVar8 + 0x18) == 7) {
      piVar9 = *(int **)(lVar8 + 0x10);
      if (*(char *)((long)piVar9 + 6) == 'S') {
        if (*piVar9 == 0x4954504f && *(int *)((long)piVar9 + 3) == 0x534e4f49) {
          uVar6 = 0x200;
          break;
        }
      }
      else if ((*(char *)((long)piVar9 + 6) == 'T') &&
              (*piVar9 == 0x4e4e4f43 && *(int *)((long)piVar9 + 3) == 0x5443454e)) {
        if ((*(byte *)(param_2 + 0xb8) & 1) == 0) {
          return 0xfffffded;
        }
        uVar6 = 0x80;
        break;
      }
      goto LAB_00173b84;
    }
    if ((*(long *)(lVar8 + 0x18) != 4) || (**(int **)(lVar8 + 0x10) != 0x44414548))
    goto LAB_00173b84;
    uVar6 = 0x100;
    break;
  case 2:
  case 4:
switchD_001736d4_caseD_39:
    if (**(char **)(*param_4 + 0x10) == ':') {
      return 0xfffffded;
    }
    goto LAB_00173b84;
  case 3:
    iVar4 = FUN_00173ec4(param_2,param_4,2);
    if (iVar4 == 0) {
      return 0xfffffded;
    }
    cVar1 = **(char **)(param_4[1] + 0x10);
    if (cVar1 == '/') {
      uVar6 = 0x800;
    }
    else {
      if ((cVar1 != '*') || (*(long *)(param_4[1] + 0x18) != 1)) goto LAB_00173b84;
      uVar6 = 0x1000;
    }
    break;
  case 5:
    iVar4 = FUN_00173ec4(param_2,param_4,8);
    if (iVar4 == 0) {
      return 0xfffffded;
    }
    lVar8 = param_4[1];
    if (*(long *)(lVar8 + 0x18) == 5) {
      lVar11 = 0;
      do {
        bVar2 = (&DAT_040f72ef)[lVar11];
        uVar7 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar7 = (uint)bVar2;
        }
        bVar2 = *(byte *)(*(long *)(lVar8 + 0x10) + lVar11);
        uVar12 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar12 = (uint)bVar2;
        }
        if ((uVar7 & 0xff) != (uVar12 & 0xff)) goto LAB_00173b84;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 5);
    }
    else {
      if (*(long *)(lVar8 + 0x18) != 4) goto LAB_00173b84;
      lVar11 = 0;
      do {
        bVar2 = (&DAT_04094693)[lVar11];
        uVar7 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar7 = (uint)bVar2;
        }
        bVar2 = *(byte *)(*(long *)(lVar8 + 0x10) + lVar11);
        uVar12 = bVar2 + 0x20;
        if (0x19 < bVar2 - 0x41) {
          uVar12 = (uint)bVar2;
        }
        if ((uVar7 & 0xff) != (uVar12 & 0xff)) goto LAB_00173b84;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 4);
    }
    uVar6 = 0x2000;
    break;
  default:
    if (iVar4 == 0x1b) {
      if (*(long *)(param_2 + 0x40) != -1) {
        return 0xfffffded;
      }
      goto LAB_00173980;
    }
    if (iVar4 != 0x25) goto switchD_001736d4_caseD_39;
    uVar5 = 0x10;
LAB_0017395c:
    iVar4 = FUN_00173ec4(param_2,param_4,uVar5);
    if (iVar4 == 0) {
      return 0xfffffded;
    }
    goto LAB_00173b84;
  }
  *(ushort *)(param_2 + 0xe2) = *(ushort *)(param_2 + 0xe2) | uVar6;
LAB_00173b84:
  if (**(char **)(*param_4 + 0x10) == ':') {
    return 0;
  }
  uVar6 = *(ushort *)(param_2 + 0xe2);
  uVar5 = 0;
LAB_00173668:
  *(ushort *)(param_2 + 0xe2) = uVar6 | 0x40;
  return uVar5;
}

