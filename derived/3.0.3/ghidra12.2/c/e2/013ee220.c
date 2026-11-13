
void FUN_013ee220(long param_1,long *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  char *pcVar4;
  ushort uVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  
  uVar8 = (param_3 & 0xffff) - (uint)*(ushort *)(param_1 + 0x348);
  if (uVar8 < *(uint *)(param_1 + 0x328)) {
    puVar6 = *(uint **)(*(long *)(param_1 + 0x330) + (long)(int)uVar8 * 8);
    if (puVar6 != (uint *)0x0) {
      uVar8 = *puVar6;
      if (uVar8 == 0 || puVar6 == (uint *)(ulong)uVar8) {
LAB_013ee268:
        uVar8 = 0;
      }
      else {
        puVar10 = (uint *)((long)puVar6 - (long)(ulong)uVar8);
        uVar8 = 0;
        if (*puVar10 != 0) {
          uVar8 = puVar10[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar7 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar10 + lVar7 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar7 != 0) {
              uVar2 = 0;
              if ((ulong)uVar8 != 0) {
                uVar2 = (uint)((ulong)((long)puVar6 - lVar7) / (ulong)uVar8);
              }
              if (*puVar10 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_051b69d0) &&
                 (uVar8 = (uint)*(ushort *)(DAT_051b69d8 + (long)(int)uVar2 * 2), uVar8 < 7))
              goto LAB_013ee26c;
            }
          }
          goto LAB_013ee268;
        }
      }
LAB_013ee26c:
      if ((uVar8 < 7) && ((0x5dU >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
        iVar9 = *(int *)(&DAT_041754dc + (long)(int)uVar8 * 4);
      }
      else {
        iVar9 = 0;
      }
      bVar3 = iVar9 == 1;
      uVar8 = *puVar6;
      if (uVar8 != 0 && puVar6 != (uint *)(ulong)uVar8) {
        puVar10 = (uint *)((long)puVar6 - (long)(ulong)uVar8);
        if (((*puVar10 != 0) && (uVar8 = puVar10[1], uVar8 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar10 + lVar7 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar7 != 0) {
            uVar2 = 0;
            if ((ulong)uVar8 != 0) {
              uVar2 = (uint)((ulong)((long)puVar6 - lVar7) / (ulong)uVar8);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_051b7348) &&
               (uVar5 = *(ushort *)(DAT_051b7350 + (long)(int)uVar2 * 2), uVar5 < 9))
            goto LAB_013ee3b4;
          }
        }
      }
      goto LAB_013ee3b0;
    }
    bVar3 = false;
    uVar5 = 0;
  }
  else {
    bVar3 = false;
LAB_013ee3b0:
    uVar5 = 0;
  }
LAB_013ee3b4:
  switch(uVar5) {
  case 0:
    FUN_038d1270(param_2,"FishShadowSS");
    if (!bVar3) {
      return;
    }
    lVar11 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_013ee670;
      lVar1 = param_2[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') goto LAB_013ee66c;
      if (*(char *)(lVar1 + 2) == '\0') goto LAB_013ee664;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    break;
  case 1:
    FUN_038d1270(param_2,"FishShadowS");
    if (!bVar3) {
      return;
    }
    lVar11 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_013ee670;
      lVar1 = param_2[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') goto LAB_013ee66c;
      if (*(char *)(lVar1 + 2) == '\0') goto LAB_013ee664;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    break;
  case 2:
    FUN_038d1270(param_2,"FishShadowM");
    if (!bVar3) {
      return;
    }
    lVar11 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_013ee670;
      lVar1 = param_2[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') goto LAB_013ee66c;
      if (*(char *)(lVar1 + 2) == '\0') goto LAB_013ee664;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    break;
  case 3:
    FUN_038d1270(param_2,"FishShadowL");
    if (!bVar3) {
      return;
    }
    lVar11 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_013ee670;
      lVar1 = param_2[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') goto LAB_013ee66c;
      if (*(char *)(lVar1 + 2) == '\0') goto LAB_013ee664;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    break;
  case 4:
    FUN_038d1270(param_2,"FishShadowLL");
    if (!bVar3) {
      return;
    }
    lVar11 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_013ee670;
      lVar1 = param_2[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') goto LAB_013ee66c;
      if (*(char *)(lVar1 + 2) == '\0') goto LAB_013ee664;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    break;
  case 5:
    FUN_038d1270(param_2,"FishShadowLLL");
    if (!bVar3) {
      return;
    }
    lVar11 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_013ee670;
      lVar1 = param_2[1] + lVar7;
      if (*(char *)(lVar1 + 1) == '\0') goto LAB_013ee66c;
      if (*(char *)(lVar1 + 2) == '\0') goto LAB_013ee664;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    break;
  case 6:
    pcVar4 = "FishShadowU";
    goto LAB_013ee650;
  case 7:
    pcVar4 = "FishShadowJ";
    goto LAB_013ee650;
  case 8:
    pcVar4 = "FishShadowK";
    goto LAB_013ee650;
  default:
    pcVar4 = "FishShadowSS";
LAB_013ee650:
    FUN_038d1270(param_2,pcVar4);
    return;
  }
  lVar7 = 0;
LAB_013ee670:
  uVar8 = (uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU);
  uVar2 = 3;
  if ((int)((int)param_2[2] - uVar8) < 4) {
    uVar2 = (int)param_2[2] + ~uVar8;
  }
  if (0 < (int)uVar2) {
    memcpy((void *)(lVar11 + (ulong)uVar8),&DAT_040ab3f7,(ulong)uVar2);
    *(undefined1 *)(lVar11 + (ulong)uVar2 + (ulong)uVar8) = 0;
  }
  return;
LAB_013ee66c:
  lVar7 = lVar7 + 1;
  goto LAB_013ee670;
LAB_013ee664:
  lVar7 = lVar7 + 2;
  goto LAB_013ee670;
}

