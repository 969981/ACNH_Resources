
void FUN_01f5a6e0(long param_1,int param_2)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  void *pvVar6;
  int iVar7;
  byte *pbVar8;
  long lVar9;
  byte bVar10;
  void *pvVar11;
  undefined *local_58;
  char *pcStack_50;
  byte local_44 [4];
  
  *(undefined1 *)(param_1 + 0x136e0) = 0;
  puVar1 = PTR_DAT_04bb2020;
  if (param_2 != 3) {
    uVar3 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
    if (DAT_05454074 != uVar3) {
      pbVar8 = &DAT_0548e140;
      if (DAT_04cd19d8 == 0) {
LAB_01f5a7dc:
        if (*pbVar8 < 8) goto LAB_01f5a854;
LAB_01f5a7e8:
        if (DAT_0537d558 == (long *)0x0) {
LAB_01f5a84c:
          pbVar8 = &DAT_0548e168;
          goto LAB_01f5a854;
        }
        lVar9 = *DAT_0537d558;
        bVar10 = *(byte *)(lVar9 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar10 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
          if (7 < bVar10) {
            puVar2 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar8 = (byte *)(lVar9 + 0x471);
          }
        }
        local_44[0] = *pbVar8;
        if (7 < local_44[0]) goto LAB_01f5a84c;
      }
      else {
        pbVar8 = &DAT_0548e140;
        if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
          pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
        }
        if (7 < *pbVar8) {
          if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
            pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
            goto LAB_01f5a7dc;
          }
          goto LAB_01f5a7e8;
        }
LAB_01f5a854:
        local_44[0] = *pbVar8;
        if (7 < local_44[0]) {
          local_44[0] = 0xff;
        }
      }
      local_58 = PTR_DAT_04bb2020 + 0x10;
      pcStack_50 = "FireworksApproachNpcIndex";
      iVar7 = FUN_0274bce0(local_44,&local_58);
      if (iVar7 != uVar3 + 1) goto LAB_01f5aa30;
    }
    *(undefined4 *)(param_1 + 0x13648) = 0;
    if ((uVar3 < 10) && ((&DAT_053fee41)[(ulong)uVar3 * 0xba0] != '\0')) {
      lVar9 = (ulong)uVar3 * 0xba0;
      bVar4 = (&DAT_053fe810)[lVar9];
      *(undefined4 *)(&DAT_053fe814 + lVar9) = 0;
      bVar10 = bVar4 >> 1;
      if (0x1e < bVar10) {
        bVar10 = 0x1f;
      }
      (&DAT_053fe810)[lVar9] = bVar10;
      (&DAT_053fe829)[lVar9] = 0x3f < bVar4;
      FUN_021af5e0();
      cVar5 = (&DAT_053fee2c)[lVar9];
      (&DAT_053fe824)[(ulong)uVar3 * 0x2e8] = 0;
      if (cVar5 == '\0') {
        pvVar11 = *(void **)(param_1 + 0x8208);
        (**(code **)(DAT_053ad080 + 0x18))(&DAT_053ad080);
        pvVar6 = DAT_053ad088;
        if (pvVar11 != DAT_053ad088) {
          (**(code **)(DAT_053ad080 + 0x18))(&DAT_053ad080);
          lVar9 = 0;
          do {
            if (*(char *)((long)DAT_053ad088 + lVar9) == '\0') goto LAB_01f5aa98;
            if (*(char *)((long)DAT_053ad088 + lVar9 + 1) == '\0') {
              lVar9 = lVar9 + 1;
              goto LAB_01f5aa98;
            }
            if (*(char *)((long)DAT_053ad088 + lVar9 + 2) == '\0') {
              lVar9 = lVar9 + 2;
              goto LAB_01f5aa98;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_01f5aa98:
          iVar7 = (int)lVar9;
          if (*(int *)(param_1 + 0x8210) <= (int)lVar9) {
            iVar7 = *(int *)(param_1 + 0x8210) + -1;
          }
          memcpy(pvVar11,pvVar6,(long)iVar7);
          *(undefined1 *)((long)pvVar11 + (long)iVar7) = 0;
        }
        pvVar11 = *(void **)(param_1 + 0x8260);
        (**(code **)(DAT_053ad090 + 0x18))(&DAT_053ad090);
        pvVar6 = DAT_053ad098;
        if (pvVar11 != DAT_053ad098) {
          (**(code **)(DAT_053ad090 + 0x18))(&DAT_053ad090);
          lVar9 = 0;
          do {
            if (*(char *)((long)DAT_053ad098 + lVar9) == '\0') goto LAB_01f5ab3c;
            if (*(char *)((long)DAT_053ad098 + lVar9 + 1) == '\0') {
              lVar9 = lVar9 + 1;
              goto LAB_01f5ab3c;
            }
            if (*(char *)((long)DAT_053ad098 + lVar9 + 2) == '\0') {
              lVar9 = lVar9 + 2;
              goto LAB_01f5ab3c;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_01f5ab3c:
          iVar7 = (int)lVar9;
          if (*(int *)(param_1 + 0x8268) <= (int)lVar9) {
            iVar7 = *(int *)(param_1 + 0x8268) + -1;
          }
          memcpy(pvVar11,pvVar6,(long)iVar7);
          *(undefined1 *)((long)pvVar11 + (long)iVar7) = 0;
        }
      }
    }
    goto LAB_01f5aa30;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar8 = &DAT_0548e140;
LAB_01f5a97c:
    if (*pbVar8 < 8) goto LAB_01f5a9f4;
LAB_01f5a988:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01f5a9ec:
      pbVar8 = &DAT_0548e168;
      goto LAB_01f5a9f4;
    }
    lVar9 = *DAT_0537d558;
    bVar10 = *(byte *)(lVar9 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
      if (7 < bVar10) {
        puVar2 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar8 = (byte *)(lVar9 + 0x471);
      }
    }
    local_44[0] = *pbVar8;
    if (7 < local_44[0]) goto LAB_01f5a9ec;
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01f5a97c;
      }
      goto LAB_01f5a988;
    }
LAB_01f5a9f4:
    local_44[0] = *pbVar8;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
  }
  local_58 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "LastApproachVillagerIndex";
  FUN_0274bfe8(local_44,&local_58,*(int *)(*(long *)(param_1 + 8) + 0x508) + 1);
LAB_01f5aa30:
  puVar1 = puVar1 + 0x10;
  pcStack_50 = "HalloweenApproachNow";
  local_58 = puVar1;
  iVar7 = FUN_02743000(&local_58);
  if (iVar7 != 0) {
    pcStack_50 = "HalloweenApproachNow";
    local_58 = puVar1;
    FUN_02743234(&local_58,0);
    pcStack_50 = "HalloweenApproachNpcIndex";
    local_58 = puVar1;
    FUN_02743234(&local_58,0);
  }
  return;
}

