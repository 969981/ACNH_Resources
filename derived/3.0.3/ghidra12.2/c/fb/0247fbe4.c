
bool FUN_0247fbe4(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  byte bVar8;
  byte bVar9;
  
  uVar4 = FUN_023266fc(param_1,0);
  if ((uVar4 & 1) == 0) {
    return false;
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  if (((lVar6 != 0) && (*(int *)(lVar6 + 0x15c) != 0)) && (*(int *)(lVar6 + 0x15c) != 0)) {
    pbVar2 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar2 = (byte *)(lVar6 + 0x158);
    }
    bVar9 = *pbVar1;
    bVar8 = *pbVar2;
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar8 != bVar9) {
      return false;
    }
  }
  if ((*(byte *)(param_1 + 0x17d2) >> 3 & 1) == 0) {
    plVar7 = &DAT_054f5738;
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar3 = __cxa_guard_acquire(&DAT_054f0960);
        if (iVar3 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
        puVar5 = (uint *)&DAT_054f0958;
        plVar7 = (long *)PTR_DAT_04bb4718;
      }
      else {
        puVar5 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar5 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*pbVar1 < 8) {
        puVar5 = (uint *)(DAT_054f5738 + 0x204) + (ulong)*pbVar1 * 2;
      }
    }
    if ((*puVar5 >> 0x1b & 1) == 0) {
      if (*plVar7 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar3 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar3 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar5 = (uint *)&DAT_054f0958;
          plVar7 = (long *)PTR_DAT_04bb4718;
        }
        else {
          puVar5 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar5 = (uint *)(*plVar7 + 0x204);
        if ((ulong)*pbVar1 < 8) {
          puVar5 = puVar5 + (ulong)*pbVar1 * 2;
        }
      }
      if ((*puVar5 >> 0x12 & 1) != 0) {
        if (*plVar7 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar3 = __cxa_guard_acquire(&DAT_054f0960);
            puVar5 = (uint *)&DAT_054f0958;
            if (iVar3 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
              puVar5 = (uint *)&DAT_054f0958;
            }
          }
          else {
            puVar5 = (uint *)&DAT_054f0958;
          }
        }
        else {
          puVar5 = (uint *)(*plVar7 + 0x204);
          if ((ulong)*pbVar1 < 8) {
            puVar5 = puVar5 + (ulong)*pbVar1 * 2;
          }
        }
        if ((*puVar5 >> 0x11 & 1) == 0) {
          return (*(byte *)(param_1 + 0x17d2) & 8) == 0;
        }
      }
    }
  }
  return false;
}

