
void FUN_024a3524(long param_1,int param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  byte bVar8;
  byte bVar9;
  undefined8 *puVar10;
  
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x1be0) = 0x3f800000;
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  if (puVar10[0x227] != 0) {
    FUN_03850760(0x3f800000);
  }
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffffffe;
  lVar5 = FUN_024a00b0(param_1);
  puVar3 = PTR_DAT_04bb5d60;
  puVar2 = PTR_DAT_04bb27c8;
  if (lVar5 != 0) {
    lVar7 = *(long *)PTR_DAT_04bb27c8;
    if ((lVar7 != 0) && (*(char *)(lVar5 + 0x289) != '\0')) {
      if (*(long *)(lVar5 + 0x278) != 0) {
        plVar1 = (long *)((long)*(int *)(lVar7 + 0x24) + *(long *)(lVar5 + 0x278));
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + -1;
      }
      *(undefined1 *)(lVar5 + 0x289) = 0;
    }
    *(undefined **)(lVar5 + 0x300) = puVar3 + 0x10;
  }
  lVar5 = FUN_024a0450(param_1);
  if (lVar5 != 0) {
    lVar7 = *(long *)puVar2;
    if ((lVar7 != 0) && (*(char *)(lVar5 + 0x289) != '\0')) {
      if (*(long *)(lVar5 + 0x278) != 0) {
        plVar1 = (long *)((long)*(int *)(lVar7 + 0x24) + *(long *)(lVar5 + 0x278));
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + -1;
      }
      *(undefined1 *)(lVar5 + 0x289) = 0;
    }
    *(undefined **)(lVar5 + 0x300) = puVar3 + 0x10;
  }
  lVar5 = FUN_024a07f0(param_1);
  if (lVar5 != 0) {
    lVar7 = *(long *)puVar2;
    if ((lVar7 != 0) && (*(char *)(lVar5 + 0x289) != '\0')) {
      if (*(long *)(lVar5 + 0x278) != 0) {
        plVar1 = (long *)((long)*(int *)(lVar7 + 0x24) + *(long *)(lVar5 + 0x278));
        if (*plVar1 != 0) {
          *(long *)(*plVar1 + 8) = plVar1[1];
        }
        if ((long *)plVar1[1] != (long *)0x0) {
          *(long *)plVar1[1] = *plVar1;
        }
        *plVar1 = 0;
        plVar1[1] = 0;
        *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + -1;
      }
      *(undefined1 *)(lVar5 + 0x289) = 0;
    }
    *(undefined **)(lVar5 + 0x300) = puVar3 + 0x10;
  }
  FUN_0249efc0(param_1,0);
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar10 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar10 = &DAT_05240280;
    }
  }
  *(undefined1 *)((long)puVar10 + 0x5e95) = 0;
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
  if (param_2 == 0x92) {
    *(undefined8 *)(param_3 + 0x22) = *(undefined8 *)(param_1 + 0x1902);
  }
  bVar8 = *(byte *)(param_1 + 0x1ee8);
  lVar5 = *(long *)PTR_DAT_04bb48a8;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  pbVar6 = (byte *)(lVar5 + 0x40);
  bVar9 = *pbVar6;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if (bVar8 != bVar9) {
    pbVar6 = (byte *)(lVar5 + 0x4c);
    bVar9 = *pbVar6;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    if (bVar8 != bVar9) {
      pbVar6 = (byte *)(lVar5 + 0x58);
      bVar9 = *pbVar6;
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (bVar8 != bVar9) {
        pbVar6 = (byte *)(lVar5 + 100);
        bVar9 = *pbVar6;
        if (7 < bVar9) {
          bVar9 = 0xff;
        }
        if (bVar8 != bVar9) {
          pbVar6 = (byte *)(lVar5 + 0x70);
          bVar9 = *pbVar6;
          if (7 < bVar9) {
            bVar9 = 0xff;
          }
          if (bVar8 != bVar9) {
            pbVar6 = (byte *)(lVar5 + 0x7c);
            bVar9 = *pbVar6;
            if (7 < bVar9) {
              bVar9 = 0xff;
            }
            if (bVar8 != bVar9) {
              pbVar6 = (byte *)(lVar5 + 0x88);
              bVar9 = *pbVar6;
              if (7 < bVar9) {
                bVar9 = 0xff;
              }
              if (bVar8 != bVar9) {
                bVar9 = *(byte *)(lVar5 + 0x94);
                if (7 < bVar9) {
                  bVar9 = 0xff;
                }
                pbVar6 = (byte *)(lVar5 + 0x94);
                if (bVar8 != bVar9) {
                  pbVar6 = (byte *)(lVar5 + 0xa0);
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_007d9170(pbVar6);
  return;
}

