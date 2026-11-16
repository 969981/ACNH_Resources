
void FUN_0275ad30(undefined8 *param_1,byte param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ushort *puVar9;
  
  if (((DAT_0557ee20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0557ee20), iVar2 != 0)) {
    DAT_0557ede0 = 0x9a;
    DAT_0557ede4 = 0x81f;
    DAT_0557ede8 = 0x98;
    DAT_0557edec = 0xe;
    DAT_0557edf0 = 0x9b;
    DAT_0557edf4 = 0x3c;
    DAT_0557edf8 = 0x99;
    DAT_0557edfc = 0xe70;
    DAT_0557ee00 = 0x97;
    DAT_0557ee04 = 0x7c0;
    DAT_0557ee08 = 0x96;
    DAT_0557ee0c = 0x1e0;
    DAT_0557ee10 = 0x94;
    DAT_0557ee14 = 0xf81;
    DAT_0557ee18 = 0x9c;
    DAT_0557ee1c = 0xc0f;
    __cxa_guard_release(&DAT_0557ee20);
  }
  iVar2 = *(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  *param_1 = 0;
  param_1[1] = 0;
  if ((int)(char)param_2 - 0xdU < 0xfffffff4) {
    uVar3 = 0;
  }
  else {
    iVar5 = 6;
    if (6 < param_2) {
      iVar5 = -6;
    }
    if (iVar2 != 1) {
      iVar5 = 0;
    }
    uVar3 = ((char)param_2 + iVar5) - 1;
  }
  uVar3 = 1 << (ulong)(uVar3 & 0x1f);
  if ((uVar3 & DAT_0557ede4) == 0) {
    if ((uVar3 & DAT_0557edec) == 0) {
      if ((uVar3 & DAT_0557edf4) == 0) {
        if ((uVar3 & DAT_0557edfc) == 0) {
          if ((uVar3 & DAT_0557ee04) == 0) {
            if ((uVar3 & DAT_0557ee0c) == 0) {
              if ((uVar3 & DAT_0557ee14) == 0) {
                puVar4 = &DAT_0557ee18;
                if ((uVar3 & DAT_0557ee1c) == 0) {
                  return;
                }
                goto LAB_0275afb0;
              }
              lVar6 = 6;
            }
            else {
              lVar6 = 5;
            }
          }
          else {
            lVar6 = 4;
          }
        }
        else {
          lVar6 = 3;
        }
      }
      else {
        lVar6 = 2;
      }
    }
    else {
      lVar6 = 1;
    }
  }
  else {
    lVar6 = 0;
  }
  *(undefined4 *)param_1 = (&DAT_0557ede0)[lVar6 * 2];
  lVar8 = lVar6 + 1;
  if ((uVar3 & (&DAT_0557ede4)[lVar8 * 4]) == 0) {
    lVar8 = lVar6 + 2;
    if (lVar8 == 8) {
      return;
    }
    if ((uVar3 & (&DAT_0557ede4)[lVar8 * 4]) == 0) {
      lVar8 = lVar6 + 3;
      if (lVar8 == 8) {
        return;
      }
      if ((uVar3 & (&DAT_0557ede4)[lVar8 * 4]) == 0) {
        lVar8 = lVar6 + 4;
        if (lVar8 == 8) {
          return;
        }
        if ((uVar3 & (&DAT_0557ede4)[lVar8 * 4]) == 0) {
          lVar8 = lVar6 + 5;
          if (lVar8 == 8) {
            return;
          }
          if ((uVar3 & (&DAT_0557ede4)[lVar8 * 4]) == 0) {
            lVar8 = lVar6 + 6;
            if (lVar8 == 8) {
              return;
            }
            if ((uVar3 & (&DAT_0557ede4)[lVar8 * 4]) == 0) {
              lVar8 = lVar6 + 7;
              if (lVar8 == 8) {
                return;
              }
              if ((uVar3 & (&DAT_0557ede4)[lVar8 * 4]) == 0) {
                return;
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)((long)param_1 + 4) = (&DAT_0557ede0)[lVar8 * 2];
  if (6 < (uint)lVar8) {
    return;
  }
  lVar7 = (lVar8 << 0x20) + 0x200000000;
  lVar6 = lVar8 + -7;
  puVar9 = &DAT_0557edec + lVar8 * 4;
  while ((uVar3 & *puVar9) == 0) {
    lVar7 = lVar7 + 0x100000000;
    puVar9 = puVar9 + 4;
    bVar1 = lVar6 == -1;
    lVar6 = lVar6 + 1;
    if (bVar1) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar9 + -2);
  if (6 < (int)lVar6 + 8) {
    return;
  }
  puVar4 = &DAT_0557ede0 + (lVar7 >> 0x20) * 2;
  lVar6 = (lVar7 >> 0x20) + -8;
  while ((uVar3 & *(ushort *)(puVar4 + 1)) == 0) {
    puVar4 = puVar4 + 2;
    bVar1 = lVar6 == -1;
    lVar6 = lVar6 + 1;
    if (bVar1) {
      return;
    }
  }
  param_1 = (undefined8 *)((long)param_1 + 0xc);
LAB_0275afb0:
  *(undefined4 *)param_1 = *puVar4;
  return;
}

