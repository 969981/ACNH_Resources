
/* WARNING: Removing unreachable block (ram,0x0231bb88) */

uint FUN_0231b960(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined8 *puVar6;
  
  puVar2 = PTR_DAT_04bb4718;
  if ((*(int *)(param_1 + 0x178) != 0) || ((*(uint *)(param_1 + 0x17cc) & 0x10008000) != 0x10000000)
     ) {
    return 0;
  }
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_054f08d8);
      if (iVar4 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
      }
      puVar5 = &DAT_054f08d0;
    }
    else {
      puVar5 = &DAT_054f08d0;
    }
  }
  else {
    puVar5 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x200);
  }
  if ((*puVar5 & 1) == 0) {
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    if (*(long *)puVar2 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
        puVar5 = (uint *)&DAT_054f0958;
      }
      else {
        puVar5 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar5 = (uint *)(*(long *)puVar2 + 0x204);
      if ((ulong)*pbVar1 < 8) {
        puVar5 = puVar5 + (ulong)*pbVar1 * 2;
      }
    }
    if ((*puVar5 >> 0x17 & 1) == 0) {
      if (*(long *)puVar2 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
          puVar5 = (uint *)&DAT_054f0958;
        }
        else {
          puVar5 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar5 = (uint *)(*(long *)puVar2 + 0x204);
        if ((ulong)*pbVar1 < 8) {
          puVar5 = puVar5 + (ulong)*pbVar1 * 2;
        }
      }
      if ((*puVar5 >> 0x18 & 1) == 0) {
        if (*(long *)puVar2 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar4 = __cxa_guard_acquire(&DAT_054f0960);
            puVar5 = (uint *)&DAT_054f0958;
            if (iVar4 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar5 = (uint *)&DAT_054f0958;
          }
        }
        else {
          puVar5 = (uint *)(*(long *)puVar2 + 0x204);
          if ((ulong)*pbVar1 < 8) {
            puVar5 = puVar5 + (ulong)*pbVar1 * 2;
          }
        }
        if ((*puVar5 >> 1 & 1) == 0) {
          puVar6 = *(undefined8 **)(param_1 + 0x60);
          if (puVar6 == (undefined8 *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar4 = __cxa_guard_acquire(&DAT_052461c0);
              puVar6 = &DAT_05240280;
              if (iVar4 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              puVar6 = &DAT_05240280;
            }
          }
          if (puVar6[0x227] == 0) {
            uVar3 = 1;
          }
          else {
            uVar3 = FUN_03850a90(puVar6[0x227],0x16,0,*(uint *)(puVar6 + 0x2d3) >> 1 & 1);
            uVar3 = uVar3 ^ 1;
          }
          goto LAB_0231bb18;
        }
      }
    }
  }
  uVar3 = 0;
LAB_0231bb18:
  return uVar3 & 1;
}

