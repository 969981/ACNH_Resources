
void FUN_0215b064(long param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  char *pcVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 local_50;
  char *pcStack_48;
  undefined4 local_24;
  
  if ((((*(char *)(param_1 + 0x6d9) != '\0') &&
       (pcVar13 = *(char **)(param_1 + 0x740), *pcVar13 == 's')) && (pcVar13[1] == 'z')) &&
     (pcVar13[2] == 'a')) {
    uVar7 = FUN_00a90354(*(undefined8 *)PTR_DAT_04bb30a0);
    puVar17 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
    if (puVar17 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_052461c0);
        puVar17 = &DAT_05240280;
        if (iVar8 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar17 = &DAT_05240280;
      }
    }
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "IsLaunchFireworks";
    if (((puVar17[0x227] != 0) && (lVar14 = *(long *)(puVar17[0x227] + 0x78), lVar14 != 0)) &&
       (plVar15 = *(long **)(lVar14 + 0x48), plVar15 != (long *)0x0)) {
      (**(code **)(*plVar15 + 0x38))(plVar15,&local_50,uVar7 & 1);
    }
  }
  switch(*(undefined4 *)(param_1 + 0x69c)) {
  case 0:
    if (*(char *)(param_1 + 0x698) < '\0') {
LAB_0215b3c8:
      iVar8 = (**(code **)(*(long *)(param_1 + 0x6a0) + (ulong)*(byte *)(param_1 + 0x6b4) * 8))
                        (param_1 + 0x6a0);
      *(int *)(param_1 + 0x6a8) = iVar8;
      if (iVar8 != *(int *)(param_1 + 0x6b0)) {
        return;
      }
      goto LAB_0215b3ec;
    }
    uVar12 = 1;
    goto LAB_0215b45c;
  case 1:
    if ((*(byte *)(param_1 + 0x7f0) >> 6 & 1) != 0) {
      return;
    }
    bVar5 = *(byte *)(param_1 + 0x698);
    if ((long)(char)bVar5 < 0) goto LAB_0215b3c8;
    lVar16 = *(long *)(param_1 + 8);
    lVar14 = *(long *)(lVar16 + 0x3b8);
    if ((lVar14 != 0) && ((*(byte *)(lVar14 + 0xad5a) >> 1 & 1) != 0)) goto LAB_0215b1c8;
    uVar7 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xd20);
    piVar1 = (int *)(*(long *)PTR_DAT_04bb3968 + 0xa20);
    piVar2 = piVar1 + uVar7;
    if (0x11 < uVar7) {
      piVar2 = piVar1;
    }
    piVar1 = (int *)PTR_DAT_04bb3238;
    if (uVar7 != 0xffffffff) {
      piVar1 = piVar2;
    }
    if ((*piVar1 != 0) ||
       ((lVar10 = *(long *)(lVar16 + 0x3b0), lVar10 != 0 &&
        ((*(int *)(lVar10 + 0x4b8) == 0 || (*(int *)(lVar10 + 0x378) != 0x23))))))
    goto LAB_0215b1c8;
    lVar10 = *(long *)(lVar16 + 0x3c0);
    if (lVar10 == 0) {
switchD_0215b4d4_caseD_2:
      if (lVar14 != 0) {
LAB_0215b5dc:
        if (*(short *)(lVar14 + 0xae84) != -2) {
          uVar11 = FUN_01e57b44();
          uVar9 = FUN_0277d7b4(uVar11,(short *)(lVar14 + 0xae84));
          if ((uVar9 & 1) != 0) goto LAB_0215b1c8;
        }
      }
    }
    else {
      puVar3 = (undefined4 *)(lVar10 + 0x10) + (ulong)*(uint *)(lVar10 + 0x294) * 0x20;
      if (4 < *(uint *)(lVar10 + 0x294)) {
        puVar3 = (undefined4 *)(lVar10 + 0x10);
      }
      switch(*puVar3) {
      case 1:
      case 4:
      case 6:
        if ((lVar14 == 0) || (puVar3[2] == 0)) goto switchD_0215b4d4_caseD_2;
LAB_0215b5a8:
        if ((*(int *)(lVar16 + 0x500) == 1) &&
           ((uVar7 = *(int *)(lVar14 + 0x77b0) - 0x3a, 0x16 < uVar7 ||
            ((1 << (ulong)(uVar7 & 0x1f) & 0x400007U) == 0)))) goto LAB_0215b1c8;
        goto LAB_0215b5dc;
      default:
        goto switchD_0215b4d4_caseD_2;
      case 3:
        if (lVar14 != 0) goto LAB_0215b5a8;
      }
    }
    if (0xfffffffc < *(int *)(param_1 + 0x7ec) - 4U) {
LAB_0215b1c8:
      lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
      if (*(int *)(lVar14 + 0x77f4) == 10) {
        return;
      }
      if (*(int *)(lVar14 + 0x77b0) == 10) {
        return;
      }
      lVar14 = param_1 + 0x498 + ((long)(char)*(byte *)(param_1 + 0x698) & 0xffffffffU) * 0x20;
      if (0xf < *(byte *)(param_1 + 0x698)) {
        lVar14 = param_1 + 0x498;
      }
      *(undefined4 *)(lVar14 + 8) = *(undefined4 *)(lVar14 + 0xc);
      return;
    }
    lVar14 = param_1 + 0x10;
    uVar9 = (long)(char)bVar5 & 0xffffffff;
    lVar16 = lVar14 + uVar9 * 0x48;
    if (0xf < bVar5) {
      lVar16 = lVar14;
    }
    if (*(short *)(lVar16 + 0x3a) != 0) {
      plVar15 = (long *)(param_1 + 0x498) + uVar9 * 4;
      if (0xf < bVar5) {
        plVar15 = (long *)(param_1 + 0x498);
      }
      iVar8 = (**(code **)(*plVar15 + (ulong)*(byte *)((long)plVar15 + 0x14) * 8))(plVar15);
      *(int *)(plVar15 + 1) = iVar8;
      if (iVar8 != (int)plVar15[2]) {
        return;
      }
      *(undefined4 *)(plVar15 + 1) = *(undefined4 *)((long)plVar15 + 0xc);
    }
    lVar10 = *(long *)(param_1 + 8);
    uVar7 = *(uint *)(lVar10 + 0x288);
    *(undefined4 *)(lVar10 + 0x288) = *(undefined4 *)(lVar10 + 0x28c);
    uVar7 = uVar7 ^ uVar7 << 0xb;
    *(undefined4 *)(lVar10 + 0x28c) = *(undefined4 *)(lVar10 + 0x290);
    uVar4 = *(uint *)(lVar10 + 0x294);
    *(uint *)(lVar10 + 0x290) = uVar4;
    uVar7 = uVar7 >> 8 ^ uVar4 >> 0x13 ^ uVar7 ^ uVar4;
    *(uint *)(lVar10 + 0x294) = uVar7;
    if ((uint)*(byte *)(lVar16 + 0x3c) <= (uint)((ulong)uVar7 * 100 >> 0x20)) {
      iVar8 = (**(code **)(*(long *)(param_1 + 0x6b8) + (ulong)*(byte *)(param_1 + 0x6cc) * 8))
                        (param_1 + 0x6b8);
      *(int *)(param_1 + 0x6c0) = iVar8;
      if (iVar8 < 1) {
        return;
      }
      FUN_02158bf0(param_1);
      *(undefined1 *)(param_1 + 0x6cc) = 0;
      *(undefined4 *)(param_1 + 0x6c8) = 0x7fffffff;
      *(undefined8 *)(param_1 + 0x6c0) = 0x8000000000000000;
      return;
    }
    if ((*(byte *)(param_1 + 0x7f0) >> 5 & 1) != 0) {
      uVar12 = 2;
      goto LAB_0215b45c;
    }
    cVar6 = *(char *)(param_1 + 0x698);
    lVar16 = lVar14 + (ulong)(uint)(int)cVar6 * 0x48;
    if (0xf < (uint)(int)cVar6) {
      lVar16 = lVar14;
    }
    FUN_0215c650(param_1,lVar16);
    *(char *)(param_1 + 0x699) = cVar6;
    FUN_02158bf0(param_1);
    bVar5 = *(byte *)(param_1 + 0x698);
    if (-1 < (char)bVar5) {
      lVar14 = param_1 + 0x498 + (ulong)bVar5 * 0x20;
      if (0xf < bVar5) {
        lVar14 = param_1 + 0x498;
      }
      *(undefined4 *)(lVar14 + 8) = *(undefined4 *)(lVar14 + 0xc);
    }
    break;
  case 2:
    uVar7 = *(uint *)(param_1 + 0x7f0);
    if ((uVar7 >> 4 & 1) == 0) {
      lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x3b8);
      if ((lVar14 == 0) || ((*(byte *)(lVar14 + 0xad5a) >> 1 & 1) == 0)) {
        uVar4 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xd20);
        piVar1 = (int *)(*(long *)PTR_DAT_04bb3968 + 0xa20);
        piVar2 = piVar1 + uVar4;
        if (0x11 < uVar4) {
          piVar2 = piVar1;
        }
        piVar1 = (int *)PTR_DAT_04bb3238;
        if (uVar4 != 0xffffffff) {
          piVar1 = piVar2;
        }
        if (*piVar1 == 0 && (uVar7 & 0x40) == 0) {
          return;
        }
      }
      *(uint *)(param_1 + 0x7f0) = uVar7 & 0xffffffef;
      *(undefined4 *)(param_1 + 0x69c) = 1;
      goto LAB_0215b3ec;
    }
    cVar6 = *(char *)(param_1 + 0x698);
    lVar14 = param_1 + 0x10 + (ulong)(uint)(int)cVar6 * 0x48;
    if (0xf < (uint)(int)cVar6) {
      lVar14 = param_1 + 0x10;
    }
    FUN_0215c650(param_1,lVar14);
    *(char *)(param_1 + 0x699) = cVar6;
    FUN_02158bf0(param_1);
    bVar5 = *(byte *)(param_1 + 0x698);
    if (-1 < (char)bVar5) {
      lVar14 = param_1 + 0x498 + (ulong)bVar5 * 0x20;
      if (0xf < bVar5) {
        lVar14 = param_1 + 0x498;
      }
      *(undefined4 *)(lVar14 + 8) = *(undefined4 *)(lVar14 + 0xc);
    }
    *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) & 0xffffffef;
    break;
  case 3:
    lVar14 = *(long *)(param_1 + 8);
    if ((*(long *)(lVar14 + 0x3b8) == 0) ||
       ((*(byte *)(*(long *)(lVar14 + 0x3b8) + 0xad5a) >> 1 & 1) == 0)) {
      uVar7 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xd20);
      piVar1 = (int *)(*(long *)PTR_DAT_04bb3968 + 0xa20);
      piVar2 = piVar1 + uVar7;
      if (0x11 < uVar7) {
        piVar2 = piVar1;
      }
      piVar1 = (int *)PTR_DAT_04bb3238;
      if (uVar7 != 0xffffffff) {
        piVar1 = piVar2;
      }
      if ((*piVar1 != 0) || ((*(byte *)(param_1 + 0x7f0) >> 6 & 1) != 0)) goto LAB_0215b33c;
      puVar17 = *(undefined8 **)(lVar14 + 0x60);
      if (puVar17 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(&DAT_052461c0);
          puVar17 = &DAT_05240280;
          if (iVar8 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar17 = &DAT_05240280;
        }
      }
      lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
      if ((*(byte *)(param_1 + 0x7f0) >> 3 & 1) == 0) {
        if (((puVar17[0x227] == 0) || (uVar9 = FUN_03850368(puVar17[0x227],0), (uVar9 & 1) == 0)) &&
           ((uVar9 = FUN_0170a684(puVar17,0), lVar14 != 0 && ((uVar9 & 1) != 0)))) {
LAB_0215b514:
          uVar9 = FUN_01e5aacc(lVar14,6);
          if ((uVar9 & 1) != 0) {
            *(undefined4 *)(param_1 + 0x69c) = 1;
            *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) & 0xfffffff7;
            return;
          }
        }
      }
      else if (lVar14 != 0) {
        local_50 = (undefined *)CONCAT44(local_50._4_4_,0xc);
        if ((*(int *)(lVar14 + 0x360) == 0xc) &&
           (*(char *)(*(long *)(lVar14 + 0x370) + 0x15) != '\0')) goto LAB_0215b514;
      }
      lVar14 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
      if (*(int *)(lVar14 + 0x4b8) == 0) {
        return;
      }
      if (*(int *)(lVar14 + 0x378) != 0x23) {
        return;
      }
      if (*(int *)(lVar14 + 0x360) == 0xc) {
        iVar8 = *(int *)(*(long *)(lVar14 + 0x370) + 8);
        local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar8);
        if (iVar8 != 0) {
          local_50 = (undefined *)CONCAT44(local_50._4_4_,0xc);
          if (*(int *)(lVar14 + 0x360) != 0xc) {
            return;
          }
          if (*(char *)(*(long *)(lVar14 + 0x370) + 0x15) == '\0') {
            return;
          }
        }
      }
      FUN_01e5aacc(lVar14,6);
    }
    else {
LAB_0215b33c:
      lVar14 = *(long *)(lVar14 + 0x3b0);
      if (((*(int *)(lVar14 + 0x360) != 4) && (*(int *)(lVar14 + 0x378) != 4)) ||
         ((local_50 = (undefined *)CONCAT44(local_50._4_4_,4), *(int *)(lVar14 + 0x4b8) != 0 &&
          (*(int *)(lVar14 + 0x378) == 0x23)))) {
        local_50 = (undefined *)((ulong)local_50._4_4_ << 0x20);
        local_24 = 0;
        FUN_01e5a930(0x40000000,lVar14,0,PTR_DAT_04bb2150,&local_50,&local_24,PTR_DAT_04bc1600,6);
      }
    }
    *(undefined4 *)(param_1 + 0x69c) = 1;
    *(uint *)(param_1 + 0x7f0) = *(uint *)(param_1 + 0x7f0) & 0xfffffff7;
LAB_0215b3ec:
    FUN_02158bf0(param_1);
  default:
    goto switchD_0215b14c_default;
  }
  uVar12 = 3;
LAB_0215b45c:
  *(undefined4 *)(param_1 + 0x69c) = uVar12;
switchD_0215b14c_default:
  return;
}

