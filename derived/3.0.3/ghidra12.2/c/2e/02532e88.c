
byte FUN_02532e88(byte *param_1,long param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  long *plVar15;
  undefined *local_d0;
  long local_c8;
  undefined1 local_c0;
  byte local_bf;
  byte local_b4 [4];
  undefined4 local_b0 [6];
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  undefined2 local_78;
  undefined1 local_76;
  char local_75;
  int local_74;
  undefined2 local_70;
  undefined1 local_6e;
  char local_6d;
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4(param_2);
  if (*(long *)puVar2 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      bVar4 = *param_1;
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      local_b0[0] = CONCAT31(local_b0[0]._1_3_,bVar4);
      lVar14 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_b0,1);
      puVar3 = PTR_DAT_04bb3238;
      puVar2 = PTR_DAT_04bb27c0;
      if (lVar14 != 0) {
        if ((param_4 & 1) == 0) {
LAB_02533190:
          if ((*(long **)(lVar14 + 0x178) == (long *)0x0) ||
             (puVar11 = (undefined8 *)**(long **)(lVar14 + 0x178), puVar11 == (undefined8 *)0x0)) {
            uVar8 = 0;
          }
          else {
            uVar8 = (**(code **)*puVar11)();
            uVar8 = uVar8 & 0xffffffff;
          }
          puVar9 = (undefined4 *)FUN_026e85f0(*(long *)(lVar14 + 0x160) + *(long *)(lVar14 + 0x158))
          ;
          local_54 = puVar9[1];
          local_58 = *puVar9;
          plVar15 = *(long **)(lVar14 + 0x178);
          if ((uVar8 & 1) == 0) {
LAB_02533208:
            if (plVar15 == (long *)0x0) goto LAB_02533228;
LAB_0253320c:
            if ((undefined8 *)*plVar15 == (undefined8 *)0x0) goto LAB_02533228;
            uVar8 = (*(code *)**(undefined8 **)*plVar15)();
            uVar8 = uVar8 & 0xffffffff;
          }
          else {
            if (plVar15 != (long *)0x0) {
              if ((undefined8 *)plVar15[1] != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)plVar15[1])();
                plVar15 = *(long **)(lVar14 + 0x178);
                goto LAB_02533208;
              }
              goto LAB_0253320c;
            }
LAB_02533228:
            uVar8 = 0;
          }
          puVar9 = (undefined4 *)FUN_026e88f0(*(long *)(lVar14 + 0x160) + *(long *)(lVar14 + 0x158))
          ;
          local_5c = puVar9[1];
          local_60 = *puVar9;
          plVar15 = *(long **)(lVar14 + 0x178);
          if ((uVar8 & 1) == 0) {
LAB_0253327c:
            if (plVar15 == (long *)0x0) goto LAB_0253329c;
LAB_02533280:
            if ((undefined8 *)*plVar15 == (undefined8 *)0x0) goto LAB_0253329c;
            uVar8 = (*(code *)**(undefined8 **)*plVar15)();
            uVar8 = uVar8 & 0xffffffff;
          }
          else {
            if (plVar15 != (long *)0x0) {
              if ((undefined8 *)plVar15[1] != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)plVar15[1])();
                plVar15 = *(long **)(lVar14 + 0x178);
                goto LAB_0253327c;
              }
              goto LAB_02533280;
            }
LAB_0253329c:
            uVar8 = 0;
          }
          puVar9 = (undefined4 *)FUN_026e8b00(*(long *)(lVar14 + 0x160) + *(long *)(lVar14 + 0x158))
          ;
          local_64 = puVar9[1];
          local_68 = *puVar9;
          plVar15 = *(long **)(lVar14 + 0x178);
          if ((uVar8 & 1) == 0) {
LAB_025332f0:
            if (plVar15 == (long *)0x0) goto LAB_02533310;
LAB_025332f4:
            if ((undefined8 *)*plVar15 == (undefined8 *)0x0) goto LAB_02533310;
            uVar8 = (*(code *)**(undefined8 **)*plVar15)();
            uVar8 = uVar8 & 0xffffffff;
          }
          else {
            if (plVar15 != (long *)0x0) {
              if ((undefined8 *)plVar15[1] != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)plVar15[1])();
                plVar15 = *(long **)(lVar14 + 0x178);
                goto LAB_025332f0;
              }
              goto LAB_025332f4;
            }
LAB_02533310:
            uVar8 = 0;
          }
          puVar10 = (undefined2 *)
                    FUN_02815540(*(long *)(lVar14 + 0x160) + *(long *)(lVar14 + 0x158));
          local_70 = *puVar10;
          local_6c = *(int *)(puVar10 + 2);
          local_6e = *(undefined1 *)(puVar10 + 1);
          local_6d = *(char *)((long)puVar10 + 3);
          plVar15 = *(long **)(lVar14 + 0x178);
          if ((uVar8 & 1) == 0) {
LAB_02533364:
            if (plVar15 == (long *)0x0) goto LAB_02533384;
LAB_02533368:
            if ((undefined8 *)*plVar15 == (undefined8 *)0x0) goto LAB_02533384;
            uVar8 = (*(code *)**(undefined8 **)*plVar15)();
            uVar8 = uVar8 & 0xffffffff;
          }
          else {
            if (plVar15 != (long *)0x0) {
              if ((undefined8 *)plVar15[1] != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)plVar15[1])();
                plVar15 = *(long **)(lVar14 + 0x178);
                goto LAB_02533364;
              }
              goto LAB_02533368;
            }
LAB_02533384:
            uVar8 = 0;
          }
          puVar10 = (undefined2 *)
                    FUN_028159b0(*(long *)(lVar14 + 0x160) + *(long *)(lVar14 + 0x158));
          local_78 = *puVar10;
          local_74 = *(int *)(puVar10 + 2);
          local_76 = *(undefined1 *)(puVar10 + 1);
          local_75 = *(char *)((long)puVar10 + 3);
          plVar15 = *(long **)(lVar14 + 0x178);
          if ((uVar8 & 1) == 0) {
LAB_025333d8:
            if (plVar15 == (long *)0x0) goto LAB_025333f8;
LAB_025333dc:
            if ((undefined8 *)*plVar15 == (undefined8 *)0x0) goto LAB_025333f8;
            uVar8 = (*(code *)**(undefined8 **)*plVar15)();
            uVar8 = uVar8 & 0xffffffff;
          }
          else {
            if (plVar15 != (long *)0x0) {
              if ((undefined8 *)plVar15[1] != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)plVar15[1])();
                plVar15 = *(long **)(lVar14 + 0x178);
                goto LAB_025333d8;
              }
              goto LAB_025333dc;
            }
LAB_025333f8:
            uVar8 = 0;
          }
          puVar9 = (undefined4 *)FUN_026e9240(*(long *)(lVar14 + 0x160) + *(long *)(lVar14 + 0x158))
          ;
          local_7c = puVar9[1];
          local_80 = *puVar9;
          plVar15 = *(long **)(lVar14 + 0x178);
          if ((uVar8 & 1) == 0) {
LAB_0253344c:
            if (plVar15 == (long *)0x0) goto LAB_0253346c;
LAB_02533450:
            if ((undefined8 *)*plVar15 == (undefined8 *)0x0) goto LAB_0253346c;
            uVar8 = (*(code *)**(undefined8 **)*plVar15)();
            uVar8 = uVar8 & 0xffffffff;
          }
          else {
            if (plVar15 != (long *)0x0) {
              if ((undefined8 *)plVar15[1] != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)plVar15[1])();
                plVar15 = *(long **)(lVar14 + 0x178);
                goto LAB_0253344c;
              }
              goto LAB_02533450;
            }
LAB_0253346c:
            uVar8 = 0;
          }
          puVar9 = (undefined4 *)FUN_026e9470(*(long *)(lVar14 + 0x160) + *(long *)(lVar14 + 0x158))
          ;
          local_84 = puVar9[1];
          local_88 = *puVar9;
          plVar15 = *(long **)(lVar14 + 0x178);
          if ((uVar8 & 1) == 0) {
LAB_025334c0:
            if (plVar15 == (long *)0x0) goto LAB_025334e0;
LAB_025334c4:
            if ((undefined8 *)*plVar15 == (undefined8 *)0x0) goto LAB_025334e0;
            uVar8 = (*(code *)**(undefined8 **)*plVar15)();
            uVar8 = uVar8 & 0xffffffff;
          }
          else {
            if (plVar15 != (long *)0x0) {
              if ((undefined8 *)plVar15[1] != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)plVar15[1])();
                plVar15 = *(long **)(lVar14 + 0x178);
                goto LAB_025334c0;
              }
              goto LAB_025334c4;
            }
LAB_025334e0:
            uVar8 = 0;
          }
          puVar9 = (undefined4 *)FUN_026e96a0(*(long *)(lVar14 + 0x160) + *(long *)(lVar14 + 0x158))
          ;
          local_90 = *puVar9;
          local_8c = puVar9[1];
          if ((((uVar8 & 1) != 0) && (*(long *)(lVar14 + 0x178) != 0)) &&
             (puVar11 = *(undefined8 **)(*(long *)(lVar14 + 0x178) + 8),
             puVar11 != (undefined8 *)0x0)) {
            (**(code **)*puVar11)();
          }
          local_98 = *(undefined4 *)PTR_DAT_04bb37e0;
          local_94 = *(int *)(PTR_DAT_04bb37e0 + 4);
        }
        else {
          puVar13 = (uint *)PTR_DAT_04bb3238;
          if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
            puVar13 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
          }
          lVar12 = *(long *)PTR_DAT_04bb27c0;
          if (lVar12 == 0) goto LAB_02533190;
          uVar5 = *puVar13;
          if ((((uVar5 == 0) ||
               (plVar15 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                    ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
              ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar15 + 0x46) != uVar5))
          {
            plVar15 = (long *)0x0;
          }
          if ((*(int *)(lVar12 + 0x288) == 1) || (*(int *)(lVar12 + 0x288) == -1)) {
            plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar12 = *(long *)puVar2;
            iVar6 = (**(code **)(*plVar7 + 0x60))();
            if (iVar6 < 0x11) {
              uVar5 = 1;
            }
            else {
              if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_02533014;
              uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_02533014:
            uVar5 = 0;
          }
          if (plVar15 == (long *)0x0) goto LAB_02533190;
          lVar12 = plVar15[0x2a];
          if (((*PTR_DAT_04bb3778 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0)) {
            *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb3778);
          }
          uVar8 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb3770);
          uVar1 = 0;
          if ((int)lVar12 == 1) {
            uVar1 = uVar5;
          }
          if (((uVar8 & 1) == 0) || (uVar1 == 0)) goto LAB_02533190;
          if ((plVar15[0xc] == 0) &&
             (((DAT_052461c0 & 1) == 0 && (iVar6 = __cxa_guard_acquire(&DAT_052461c0), iVar6 != 0)))
             ) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
          local_b0[0] = 4;
          lVar12 = plVar15[0x53];
          if (lVar12 == 0) goto LAB_02533190;
          lVar14 = *(long *)(lVar12 + 0xbdd0) +
                   ((ulong)*(uint *)(*(long *)(lVar12 + 0xbdd0) + 0x10) & 1) * 0x20;
          local_58 = *(undefined4 *)(lVar14 + 0x14);
          local_54 = *(int *)(lVar14 + 0x18);
          lVar14 = *(long *)(lVar12 + 0xbdd8) +
                   ((ulong)*(uint *)(*(long *)(lVar12 + 0xbdd8) + 0x10) & 1) * 0x20;
          local_60 = *(undefined4 *)(lVar14 + 0x14);
          local_5c = *(int *)(lVar14 + 0x18);
          lVar14 = *(long *)(lVar12 + 0xbde0) +
                   ((ulong)*(uint *)(*(long *)(lVar12 + 0xbde0) + 0x10) & 1) * 0x20;
          local_68 = *(undefined4 *)(lVar14 + 0x14);
          local_64 = *(int *)(lVar14 + 0x18);
          FUN_0233f7ac(&local_70,lVar12);
          FUN_0233f9a8(&local_78,lVar12);
          lVar14 = *(long *)(lVar12 + 0xbdf8) +
                   ((ulong)*(uint *)(*(long *)(lVar12 + 0xbdf8) + 0x10) & 1) * 0x20;
          local_80 = *(undefined4 *)(lVar14 + 0x14);
          local_7c = *(int *)(lVar14 + 0x18);
          lVar14 = *(long *)(lVar12 + 0xbe00) +
                   ((ulong)*(uint *)(*(long *)(lVar12 + 0xbe00) + 0x10) & 1) * 0x20;
          local_88 = *(undefined4 *)(lVar14 + 0x14);
          local_84 = *(int *)(lVar14 + 0x18);
          lVar14 = *(long *)(lVar12 + 0xbe08) +
                   ((ulong)*(uint *)(*(long *)(lVar12 + 0xbe08) + 0x10) & 1) * 0x20;
          local_90 = *(undefined4 *)(lVar14 + 0x14);
          local_8c = *(int *)(lVar14 + 0x18);
          FUN_0253395c(&local_98,param_1,*(undefined4 *)puVar3);
        }
        if ((param_3 & 1) == 0) {
          uVar8 = FUN_0277d7b4(&local_58,param_2);
          if ((((((uVar8 & 1) != 0) || (uVar8 = FUN_0277d7b4(&local_60,param_2), (uVar8 & 1) != 0))
               || ((uVar8 = FUN_0277d7b4(&local_68,param_2), (uVar8 & 1) != 0 ||
                   ((uVar8 = FUN_0277d7b4(&local_70,param_2), (uVar8 & 1) != 0 ||
                    (uVar8 = FUN_0277d7b4(&local_78,param_2), (uVar8 & 1) != 0)))))) ||
              (uVar8 = FUN_0277d7b4(&local_80,param_2), (uVar8 & 1) != 0)) ||
             ((uVar8 = FUN_0277d7b4(&local_88,param_2), (uVar8 & 1) != 0 ||
              (uVar8 = FUN_0277d7b4(&local_90,param_2), (uVar8 & 1) != 0)))) goto LAB_025337e4;
          uVar8 = FUN_0277d9a8(param_2);
          if ((uVar8 & 1) != 0) {
            FUN_01ad5d04(local_b0,param_2);
            uVar8 = FUN_01adba10(local_b0,1);
            if ((uVar8 & 1) != 0) {
              uVar8 = FUN_0277d7b4(&local_98,param_2);
              if ((uVar8 & 1) == 0) {
                FUN_0252d8f0(&local_d0,param_1);
                bVar4 = FUN_0277d7b4(&local_d0,param_2);
                goto LAB_025338b4;
              }
              goto LAB_025337e4;
            }
          }
        }
        else {
          uVar8 = FUN_0277d7b4(&local_58,param_2);
          if ((((((((uVar8 & 1) != 0) && (local_58._3_1_ == *(char *)(param_2 + 3))) &&
                 (local_54 == *(int *)(param_2 + 4))) ||
                (((uVar8 = FUN_0277d7b4(&local_60,param_2), (uVar8 & 1) != 0 &&
                  (local_60._3_1_ == *(char *)(param_2 + 3))) && (local_5c == *(int *)(param_2 + 4))
                 ))) || ((((uVar8 = FUN_0277d7b4(&local_68,param_2), (uVar8 & 1) != 0 &&
                           (local_68._3_1_ == *(char *)(param_2 + 3))) &&
                          (local_64 == *(int *)(param_2 + 4))) ||
                         (((uVar8 = FUN_0277d7b4(&local_70,param_2), (uVar8 & 1) != 0 &&
                           (local_6d == *(char *)(param_2 + 3))) &&
                          (local_6c == *(int *)(param_2 + 4))))))) ||
              ((((uVar8 = FUN_0277d7b4(&local_78,param_2), (uVar8 & 1) != 0 &&
                 (local_75 == *(char *)(param_2 + 3))) && (local_74 == *(int *)(param_2 + 4))) ||
               ((((uVar8 = FUN_0277d7b4(&local_80,param_2), (uVar8 & 1) != 0 &&
                  (local_80._3_1_ == *(char *)(param_2 + 3))) && (local_7c == *(int *)(param_2 + 4))
                 ) || (((uVar8 = FUN_0277d7b4(&local_88,param_2), (uVar8 & 1) != 0 &&
                        (local_88._3_1_ == *(char *)(param_2 + 3))) &&
                       (local_84 == *(int *)(param_2 + 4))))))))) ||
             (((uVar8 = FUN_0277d7b4(&local_90,param_2), (uVar8 & 1) != 0 &&
               (local_90._3_1_ == *(char *)(param_2 + 3))) && (local_8c == *(int *)(param_2 + 4)))))
          {
LAB_025337e4:
            bVar4 = 1;
            goto LAB_025338b4;
          }
          uVar8 = FUN_0277d9a8(param_2);
          if ((uVar8 & 1) != 0) {
            FUN_01ad5d04(local_b0,param_2);
            uVar8 = FUN_01adba10(local_b0,1);
            if ((uVar8 & 1) != 0) {
              uVar8 = FUN_0277d7b4(&local_98,param_2);
              if ((((uVar8 & 1) != 0) && (local_98._3_1_ == *(char *)(param_2 + 3))) &&
                 (local_94 == *(int *)(param_2 + 4))) goto LAB_025337e4;
              local_b4[0] = *param_1;
              if (7 < local_b4[0]) {
                local_b4[0] = 0xff;
              }
              lVar14 = FUN_0266a000(local_b4);
              if (lVar14 != 0) {
                local_c0 = 1;
                local_c8 = lVar14;
                if (*(long **)(lVar14 + 0x28) == (long *)0x0) {
                  local_bf = 0;
                }
                else {
                  puVar11 = (undefined8 *)**(long **)(lVar14 + 0x28);
                  local_bf = 0;
                  if (puVar11 != (undefined8 *)0x0) {
                    local_bf = (**(code **)*puVar11)();
                  }
                }
                local_bf = local_bf & 1;
                local_d0 = PTR_DAT_04bb5ae0 + 0x10;
                lVar14 = FUN_02816430(*(long *)(lVar14 + 0x10) + *(long *)(lVar14 + 8));
                uVar8 = FUN_0277d7b4(lVar14,param_2);
                if (((uVar8 & 1) == 0) || (*(char *)(lVar14 + 3) != *(char *)(param_2 + 3))) {
                  bVar4 = false;
                }
                else {
                  bVar4 = *(int *)(lVar14 + 4) == *(int *)(param_2 + 4);
                }
                FUN_02640184(&local_d0);
                goto LAB_025338b4;
              }
            }
          }
        }
      }
    }
  }
  bVar4 = 0;
LAB_025338b4:
  return bVar4 & 1;
}

