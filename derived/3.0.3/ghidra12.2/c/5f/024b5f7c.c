
void FUN_024b5f7c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined8 local_50;
  char *local_48;
  
  puVar2 = PTR_DAT_04bb48a0;
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar5 = *(long *)PTR_DAT_04bb48a0;
    bVar7 = *(byte *)(param_1 + 0x1ee8);
    bVar8 = *(byte *)(lVar5 + 0x44);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    if (bVar7 == bVar8) {
      lVar6 = 0;
LAB_024b60b8:
      lVar5 = lVar5 + 0x40 + lVar6 * 0x20;
    }
    else {
      bVar8 = *(byte *)(lVar5 + 100);
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 == bVar8) {
        lVar6 = 1;
        goto LAB_024b60b8;
      }
      bVar8 = *(byte *)(lVar5 + 0x84);
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 == bVar8) {
        lVar6 = 2;
        goto LAB_024b60b8;
      }
      bVar8 = *(byte *)(lVar5 + 0xa4);
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 == bVar8) {
        lVar6 = 3;
        goto LAB_024b60b8;
      }
      bVar8 = *(byte *)(lVar5 + 0xc4);
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 == bVar8) {
        lVar6 = 4;
        goto LAB_024b60b8;
      }
      bVar8 = *(byte *)(lVar5 + 0xe4);
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 == bVar8) {
        lVar6 = 5;
        goto LAB_024b60b8;
      }
      bVar8 = *(byte *)(lVar5 + 0x104);
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 == bVar8) {
        lVar6 = 6;
        goto LAB_024b60b8;
      }
      bVar8 = *(byte *)(lVar5 + 0x124);
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 == bVar8) {
        lVar6 = 7;
        goto LAB_024b60b8;
      }
      lVar5 = lVar5 + 0x140;
    }
    *(int *)(param_1 + 0x1900) = (int)(*(float *)(lVar5 + 0x10) * 999.99994);
    iVar3 = (int)(*(float *)(lVar5 + 0x14) * 4.0);
    if (0x7ffe < iVar3) {
      iVar3 = 0x7fff;
    }
    if (iVar3 < -0x7fff) {
      iVar3 = -0x8000;
    }
    *(short *)(param_1 + 0x1904) = (short)iVar3;
    *(int *)(param_1 + 0x1906) = (int)(*(float *)(lVar5 + 0x18) * 999.99994);
    puVar4 = *(undefined8 **)(param_1 + 0x60);
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 0x60);
  }
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar4 = &DAT_05240280;
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = "CommonRodWaitHit";
  FUN_017081d0(puVar4,&local_50,6,1,0);
  uVar9 = *(undefined4 *)(param_1 + 0x230);
  puVar4 = *(undefined8 **)(param_1 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0,uVar9);
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar4 = &DAT_05240280;
    }
    else {
      puVar4 = &DAT_05240280;
    }
  }
  lVar5 = FUN_017067d4(puVar4,uVar9,0);
  if (lVar5 != 0) {
    local_50 = puVar1 + 0x10;
    local_48 = "ToolRodWaitHit";
    FUN_01751d60(lVar5,&local_50,6,0,0);
  }
  lVar5 = *(long *)puVar2;
  bVar7 = *(byte *)(param_1 + 0x1ee8);
  bVar8 = *(byte *)(lVar5 + 0x44);
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  if (bVar7 == bVar8) {
    lVar6 = 0;
  }
  else {
    bVar8 = *(byte *)(lVar5 + 100);
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    if (bVar7 == bVar8) {
      lVar6 = 1;
    }
    else {
      bVar8 = *(byte *)(lVar5 + 0x84);
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      if (bVar7 == bVar8) {
        lVar6 = 2;
      }
      else {
        bVar8 = *(byte *)(lVar5 + 0xa4);
        if (7 < bVar8) {
          bVar8 = 0xff;
        }
        if (bVar7 == bVar8) {
          lVar6 = 3;
        }
        else {
          bVar8 = *(byte *)(lVar5 + 0xc4);
          if (7 < bVar8) {
            bVar8 = 0xff;
          }
          if (bVar7 == bVar8) {
            lVar6 = 4;
          }
          else {
            bVar8 = *(byte *)(lVar5 + 0xe4);
            if (7 < bVar8) {
              bVar8 = 0xff;
            }
            if (bVar7 == bVar8) {
              lVar6 = 5;
            }
            else {
              bVar8 = *(byte *)(lVar5 + 0x104);
              if (7 < bVar8) {
                bVar8 = 0xff;
              }
              if (bVar7 == bVar8) {
                lVar6 = 6;
              }
              else {
                bVar8 = *(byte *)(lVar5 + 0x124);
                if (7 < bVar8) {
                  bVar8 = 0xff;
                }
                if (bVar7 != bVar8) {
                  lVar5 = lVar5 + 0x140;
                  goto LAB_024b62b0;
                }
                lVar6 = 7;
              }
            }
          }
        }
      }
    }
  }
  lVar5 = lVar5 + 0x40 + lVar6 * 0x20;
LAB_024b62b0:
  local_50 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x1904) * 0.25,
                      (float)*(int *)(param_1 + 0x1900) * 0.001);
  local_48 = (char *)CONCAT44(local_48._4_4_,(float)*(int *)(param_1 + 0x1906) * 0.001);
  uVar9 = FUN_016e37dc(&local_50);
  local_50 = (undefined *)CONCAT44(uVar9,(undefined4)local_50);
  *(undefined4 *)(lVar5 + 0x10) = (undefined4)local_50;
  *(undefined4 *)(lVar5 + 0x14) = uVar9;
  *(undefined4 *)(lVar5 + 0x18) = local_48._0_4_;
  uVar9 = FUN_024b1b70(param_1);
  FUN_024b19e0(uVar9,6);
  return;
}

