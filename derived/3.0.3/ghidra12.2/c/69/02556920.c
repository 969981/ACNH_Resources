
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02556920(undefined4 *param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  bool bVar12;
  byte local_9c [4];
  undefined **local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined4 local_7c;
  undefined4 uStack_78;
  byte local_74 [4];
  uint local_70;
  uint local_6c;
  long local_68;
  long local_60;
  undefined8 uStack_58;
  
  FUN_0252d8f0(&local_7c);
  puVar2 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_7c);
  uVar1 = DAT_0558600c;
  lVar10 = *(long *)puVar2;
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_88 = 0;
      local_90 = local_7c;
      uStack_8c = uStack_78;
      local_98 = &PTR_FUN_04a36b50;
      uVar3 = FUN_0277d6c4(&local_90);
      if (*(long *)puVar2 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(&local_7c);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8), lVar10 != 0)) {
            local_88 = lVar10;
          }
        }
      }
      local_74[0] = 0;
      local_74[1] = 0;
      FUN_01adab50(&local_98,local_74);
      local_70 = 0;
      do {
        if ((local_70 != 0) && (local_6c = local_70, local_70 < 0xe)) {
          local_68 = CONCAT44(local_68._4_4_,local_70);
          uVar3 = local_70 + 7;
          if (-1 < (int)local_70) {
            uVar3 = local_70;
          }
          if (((uint)((int)uVar3 >> 3) < 2) &&
             (local_68 = CONCAT44(local_68._4_4_,local_70),
             (local_74[(uint)((int)uVar3 >> 3)] >> (ulong)(local_70 & 7) & 1) != 0)) {
            if ((local_70 == 9) &&
               (uVar5 = FUN_02556d7c(&local_7c,param_2,param_3), (uVar5 & 1) != 0)) {
              local_9c[0] = *param_2;
              if (7 < local_9c[0]) {
                local_9c[0] = 0xff;
              }
              lVar10 = FUN_02583354(DAT_055021a0,local_9c,1);
              if (lVar10 != 0) {
                plVar7 = *(long **)(lVar10 + 0x1aa0);
                if ((plVar7 == (long *)0x0) || ((undefined8 *)*plVar7 == (undefined8 *)0x0)) {
                  bVar12 = *(char *)(*(long *)(lVar10 + 0x1a88) + *(long *)(lVar10 + 0x1a80) + 0x8b0
                                    ) != '\0';
LAB_02556bd8:
                  if (plVar7 == (long *)0x0) goto LAB_02556c2c;
LAB_02556bdc:
                  if ((undefined8 *)*plVar7 == (undefined8 *)0x0) goto LAB_02556c2c;
                  uVar5 = (*(code *)**(undefined8 **)*plVar7)();
                  lVar11 = *(long *)(lVar10 + 0x1a88) + *(long *)(lVar10 + 0x1a80);
                  plVar7 = *(long **)(lVar10 + 0x1aa0);
                  iVar9 = (int)*(char *)(lVar11 + 0x8b1);
                  if ((uVar5 & 1) == 0) goto LAB_02556c3c;
                  if (plVar7 != (long *)0x0) {
                    if ((undefined8 *)plVar7[1] != (undefined8 *)0x0) {
                      (*(code *)**(undefined8 **)plVar7[1])();
                      plVar7 = *(long **)(lVar10 + 0x1aa0);
                      goto LAB_02556c3c;
                    }
                    goto LAB_02556c40;
                  }
LAB_02556c70:
                  FUN_028166e0(lVar11,&local_7c,bVar12,iVar9);
LAB_02556cf0:
                  if ((*(long **)(lVar10 + 0x1aa0) == (long *)0x0) ||
                     (puVar6 = (undefined8 *)**(long **)(lVar10 + 0x1aa0),
                     puVar6 == (undefined8 *)0x0)) goto LAB_02556d14;
                  uVar3 = (**(code **)*puVar6)();
                  uVar3 = uVar3 ^ 1;
                }
                else {
                  uVar5 = (*(code *)**(undefined8 **)*plVar7)();
                  plVar7 = *(long **)(lVar10 + 0x1aa0);
                  bVar12 = *(char *)(*(long *)(lVar10 + 0x1a88) + *(long *)(lVar10 + 0x1a80) + 0x8b0
                                    ) != '\0';
                  if ((uVar5 & 1) == 0) goto LAB_02556bd8;
                  if (plVar7 != (long *)0x0) {
                    if ((undefined8 *)plVar7[1] != (undefined8 *)0x0) {
                      (*(code *)**(undefined8 **)plVar7[1])();
                      plVar7 = *(long **)(lVar10 + 0x1aa0);
                      goto LAB_02556bd8;
                    }
                    goto LAB_02556bdc;
                  }
LAB_02556c2c:
                  iVar9 = (int)*(char *)(*(long *)(lVar10 + 0x1a88) + *(long *)(lVar10 + 0x1a80) +
                                        0x8b1);
LAB_02556c3c:
                  if (plVar7 == (long *)0x0) {
                    lVar11 = *(long *)(lVar10 + 0x1a88) + *(long *)(lVar10 + 0x1a80);
                    goto LAB_02556c70;
                  }
LAB_02556c40:
                  if ((undefined8 *)plVar7[2] == (undefined8 *)0x0) {
                    uVar5 = 0;
LAB_02556c88:
                    plVar7 = (long *)plVar7[4];
                    if (plVar7 != (long *)0x0) {
                      local_68 = *(long *)(lVar10 + 0x1a80);
                      local_60 = *(long *)(lVar10 + 0x1a88);
                      uStack_58 = 0x8b8;
                      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
                    }
                  }
                  else {
                    uVar5 = (*(code *)**(undefined8 **)plVar7[2])();
                    plVar7 = *(long **)(lVar10 + 0x1aa0);
                    uVar5 = uVar5 & 0xffffffff;
                    if (plVar7 != (long *)0x0) goto LAB_02556c88;
                  }
                  FUN_028166e0(*(long *)(lVar10 + 0x1a88) + *(long *)(lVar10 + 0x1a80),&local_7c,
                               bVar12,iVar9);
                  if ((uVar5 & 1) == 0) goto LAB_02556cf0;
                  if (*(long *)(lVar10 + 0x1aa0) != 0) {
                    puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x1aa0) + 0x18);
                    if (puVar6 != (undefined8 *)0x0) {
                      (**(code **)*puVar6)();
                    }
                    goto LAB_02556cf0;
                  }
LAB_02556d14:
                  uVar3 = 1;
                }
                uVar4 = FUN_028169a0(*(long *)(lVar10 + 0x1a88) + *(long *)(lVar10 + 0x1a80));
                if ((((uVar3 & 1) == 0) && (*(long *)(lVar10 + 0x1aa0) != 0)) &&
                   (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x1aa0) + 8),
                   puVar6 != (undefined8 *)0x0)) {
                  (**(code **)*puVar6)();
                }
                if (uVar4 < 0x28) {
                  puVar8 = &local_7c;
                  FUN_02674700(param_2,uVar4,&local_7c,2,0);
                }
                else {
                  puVar8 = &local_7c;
                }
                goto LAB_02556ba4;
              }
            }
            goto LAB_02556b9c;
          }
        }
        local_70 = local_70 + 1;
        if (local_70 == 0xe) {
LAB_02556b9c:
          puVar8 = (undefined4 *)&DAT_05586008;
LAB_02556ba4:
          uVar1 = puVar8[1];
          *param_1 = *puVar8;
          param_1[1] = uVar1;
          return;
        }
      } while( true );
    }
  }
  *param_1 = _DAT_05586008;
  param_1[1] = uVar1;
  return;
}

