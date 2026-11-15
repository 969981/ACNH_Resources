
void FUN_024b55a8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined8 local_50;
  char *local_48;
  
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  puVar1 = PTR_DAT_04bb2020;
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = "CommonRodWaitHit";
  FUN_017081d0(puVar3,&local_50,6,1,0);
  uVar8 = *(undefined4 *)(param_1 + 0x230);
  puVar3 = *(undefined8 **)(param_1 + 0x60);
  if (puVar3 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0,uVar8);
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
      puVar3 = &DAT_05240280;
    }
    else {
      puVar3 = &DAT_05240280;
    }
  }
  lVar4 = FUN_017067d4(puVar3,uVar8,0);
  if (lVar4 != 0) {
    local_50 = puVar1 + 0x10;
    local_48 = "ToolRodWaitHit";
    FUN_01751d60(lVar4,&local_50,6,0,0);
  }
  bVar6 = *(byte *)(param_1 + 0x1ee8);
  lVar4 = *(long *)PTR_DAT_04bb48a0;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  bVar7 = *(byte *)(lVar4 + 0x44);
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  if (bVar6 == bVar7) {
    lVar5 = 0;
  }
  else {
    bVar7 = *(byte *)(lVar4 + 100);
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    if (bVar6 == bVar7) {
      lVar5 = 1;
    }
    else {
      bVar7 = *(byte *)(lVar4 + 0x84);
      if (7 < bVar7) {
        bVar7 = 0xff;
      }
      if (bVar6 == bVar7) {
        lVar5 = 2;
      }
      else {
        bVar7 = *(byte *)(lVar4 + 0xa4);
        if (7 < bVar7) {
          bVar7 = 0xff;
        }
        if (bVar6 == bVar7) {
          lVar5 = 3;
        }
        else {
          bVar7 = *(byte *)(lVar4 + 0xc4);
          if (7 < bVar7) {
            bVar7 = 0xff;
          }
          if (bVar6 == bVar7) {
            lVar5 = 4;
          }
          else {
            bVar7 = *(byte *)(lVar4 + 0xe4);
            if (7 < bVar7) {
              bVar7 = 0xff;
            }
            if (bVar6 == bVar7) {
              lVar5 = 5;
            }
            else {
              bVar7 = *(byte *)(lVar4 + 0x104);
              if (7 < bVar7) {
                bVar7 = 0xff;
              }
              if (bVar6 == bVar7) {
                lVar5 = 6;
              }
              else {
                bVar7 = *(byte *)(lVar4 + 0x124);
                if (7 < bVar7) {
                  bVar7 = 0xff;
                }
                if (bVar6 != bVar7) {
                  lVar4 = lVar4 + 0x140;
                  goto LAB_024b5778;
                }
                lVar5 = 7;
              }
            }
          }
        }
      }
    }
  }
  lVar4 = lVar4 + 0x40 + lVar5 * 0x20;
LAB_024b5778:
  local_50 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x1904) * 0.25,
                      (float)*(int *)(param_1 + 0x1900) * 0.001);
  local_48 = (char *)CONCAT44(local_48._4_4_,(float)*(int *)(param_1 + 0x1906) * 0.001);
  uVar8 = FUN_016e37dc(&local_50);
  local_50 = (undefined *)CONCAT44(uVar8,(undefined4)local_50);
  *(undefined4 *)(lVar4 + 0x10) = (undefined4)local_50;
  *(undefined4 *)(lVar4 + 0x14) = uVar8;
  *(undefined4 *)(lVar4 + 0x18) = local_48._0_4_;
  uVar8 = FUN_024b1b70(param_1);
  FUN_024b19e0(uVar8,4);
  return;
}

