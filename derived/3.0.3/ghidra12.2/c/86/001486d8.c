
undefined8 FUN_001486d8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  char local_94 [4];
  long local_90;
  int local_88;
  char local_84 [4];
  char local_80 [4];
  char local_7c [4];
  char local_78 [4];
  char local_74 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_74[0] = '\0';
  local_78[0] = '\0';
  local_7c[0] = '\0';
  local_80[0] = '\0';
  local_84[0] = '\0';
  local_88 = 0;
  if (param_4 == 0) {
    uVar11 = 2;
  }
  else {
    uVar11 = 2;
    if (*(int *)(param_4 + 0x1710) == -0x3f212453) {
      iVar6 = 0;
      local_70 = param_2;
      uStack_68 = param_3;
      do {
        if ((*(long *)(param_4 + 0x10) == 0) && (*(int *)(param_4 + 0x60) - 3U < 0xd)) {
          FUN_0014d5f8(param_4,"In state %d with no conn, bail out!\n");
          return 4;
        }
        cVar1 = *(char *)(param_1 + 0xf0);
        *(undefined1 *)(param_1 + 0xf0) = 0;
        if (cVar1 != '\0') {
          FUN_0014a06c(param_1);
        }
        uVar9 = *(uint *)(param_4 + 0x60);
        if (*(long **)(param_4 + 0x10) != (long *)0x0) {
          if (uVar9 - 3 < 0xe) {
            **(long **)(param_4 + 0x10) = param_4;
            uVar9 = *(uint *)(param_4 + 0x60);
            if (*(long *)(param_4 + 0x10) == 0) goto LAB_001487dc;
          }
          if (0xe < uVar9 - 2) goto LAB_001487dc;
          iVar3 = FUN_00157b2c(param_4,&local_70,uVar9 < 9);
          uVar9 = *(uint *)(param_4 + 0x60);
          if (-1 < iVar3) goto LAB_001487dc;
          if (uVar9 == 4) {
            uVar4 = FUN_001471a8(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1028),
                                 *(undefined8 *)(param_4 + 0x1030));
            pcVar8 = "Connection timed out after %d milliseconds";
LAB_00148c88:
            FUN_0014d5f8(param_4,pcVar8,uVar4);
          }
          else {
            if (uVar9 == 3) {
              uVar4 = FUN_001471a8(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1028),
                                   *(undefined8 *)(param_4 + 0x1030));
              pcVar8 = "Resolving timed out after %d milliseconds";
              goto LAB_00148c88;
            }
            lVar12 = *(long *)(param_4 + 0xf0);
            uVar4 = FUN_001471a8(local_70,uStack_68,*(undefined8 *)(param_4 + 0x1028),
                                 *(undefined8 *)(param_4 + 0x1030));
            if (lVar12 == -1) {
              FUN_0014d5f8(param_4,
                           "Operation timed out after %d milliseconds with %ld bytes received",uVar4
                           ,*(undefined8 *)(param_4 + 0x100));
            }
            else {
              FUN_0014d5f8(param_4,
                           "Operation timed out after %d milliseconds with %ld out of %ld bytes received"
                           ,uVar4,*(undefined8 *)(param_4 + 0x100),*(undefined8 *)(param_4 + 0xf0));
            }
          }
          bVar2 = 9 < *(uint *)(param_4 + 0x60);
          if (9 < *(uint *)(param_4 + 0x60)) {
            FUN_00158f30(*(undefined8 *)(param_4 + 0x10),2);
          }
          iVar6 = 0x1c;
LAB_00149048:
          FUN_00147a74(param_4,iVar6,1);
          iVar3 = 0;
          goto switchD_001487fc_caseD_1;
        }
LAB_001487dc:
        iVar3 = 0;
        bVar2 = false;
        switch(uVar9) {
        case 0:
          iVar6 = FUN_00161180(param_4);
          if (iVar6 == 0) {
            if (*(int *)(param_4 + 0x60) != 2) {
              *(undefined4 *)(param_4 + 0x60) = 2;
              FUN_0016116c(param_4);
            }
            FUN_00146c9c(param_4,1);
            goto LAB_001490ec;
          }
          goto LAB_001494c4;
        case 1:
        case 0x11:
          break;
        case 2:
          FUN_00146c9c(param_4,2);
          if (*(long *)(param_4 + 0x7a8) != 0) {
            FUN_00147570(param_4,*(long *)(param_4 + 0x7a8),8);
          }
          if (*(long *)(param_4 + 0x7b0) != 0) {
            FUN_00147570(param_4,*(long *)(param_4 + 0x7b0),2);
          }
          iVar6 = FUN_001501ec(param_4,local_78,local_7c);
          if (iVar6 != 0) {
            if (iVar6 == 0x59) {
              if (*(int *)(param_4 + 0x60) != 1) {
                *(undefined4 *)(param_4 + 0x60) = 1;
              }
              FUN_00143a90(param_1 + 0x40,*(undefined8 *)(param_1 + 0x48),param_4,param_4 + 0x18);
              goto LAB_001494bc;
            }
            goto LAB_001494c4;
          }
          iVar6 = FUN_00166818(param_4,*(undefined8 *)(param_4 + 0x10));
          if (iVar6 == 0) {
            if (local_78[0] != '\0') {
              iVar3 = 0;
              if (*(int *)(param_4 + 0x60) != 3) {
                uVar4 = 3;
                goto LAB_00148ec4;
              }
              goto LAB_00149534;
            }
            if (local_7c[0] == '\0') {
              uVar7 = FUN_00166714(*(undefined8 *)(param_4 + 0x10));
              iVar6 = *(int *)(param_4 + 0x60);
              if ((uVar7 & 1) == 0) {
                if (iVar6 == 4) goto LAB_00148d38;
                uVar4 = 4;
                goto LAB_00148ec0;
              }
              iVar3 = -1;
              goto joined_r0x00148950;
            }
            goto LAB_001489f8;
          }
LAB_00148b24:
          iVar3 = 0;
          bVar2 = true;
          break;
        case 3:
          lVar12 = *(long *)(param_4 + 0x10);
          local_90 = 0;
          if ((*(uint *)(lVar12 + 0x41c) >> 5 & 1) == 0) {
            if ((*(uint *)(lVar12 + 0x41c) >> 2 & 1) == 0) {
              puVar10 = (undefined8 *)(lVar12 + 0xd0);
            }
            else {
              puVar10 = (undefined8 *)(lVar12 + 0x100);
            }
          }
          else {
            puVar10 = (undefined8 *)(lVar12 + 0x160);
          }
          uVar11 = *puVar10;
          local_90 = FUN_0014a298(lVar12,uVar11,*(undefined4 *)(lVar12 + 400));
          if (local_90 == 0) {
LAB_00148f20:
            iVar6 = FUN_0014a878(*(undefined8 *)(param_4 + 0x10),&local_90);
          }
          else {
            *(long *)(lVar12 + 0x540) = local_90;
            *(byte *)(lVar12 + 0x558) = *(byte *)(lVar12 + 0x558) | 1;
            FUN_0014d430(param_4,"Hostname \'%s\' was found in DNS cache\n",uVar11);
            if (local_90 == 0) goto LAB_00148f20;
            iVar6 = 0;
          }
          FUN_00147cc0(param_1,param_4);
          if (local_90 == 0) {
            iVar3 = 0;
          }
          else {
            iVar6 = FUN_0014ae08(*(undefined8 *)(param_4 + 0x10),local_7c);
            if (iVar6 == 0) {
              if (local_7c[0] == '\0') {
                uVar7 = FUN_00166714(*(undefined8 *)(param_4 + 0x10));
                if ((uVar7 & 1) == 0) {
                  if (*(int *)(param_4 + 0x60) != 4) {
                    uVar4 = 4;
                    goto LAB_0014947c;
                  }
                }
                else if (*(int *)(param_4 + 0x60) != 5) {
                  uVar4 = 5;
LAB_0014947c:
                  *(undefined4 *)(param_4 + 0x60) = uVar4;
                }
              }
              else {
                uVar4 = 8;
                if ((*(ulong *)(param_1 + 0xe8) & 1) == 0) {
                  uVar4 = 9;
                }
                FUN_00147520(param_4,uVar4);
              }
              iVar6 = 0;
              iVar3 = -1;
            }
            else {
              iVar3 = 0;
              *(undefined8 *)(param_4 + 0x10) = 0;
            }
          }
          bVar2 = iVar6 == 0;
          goto LAB_001490c8;
        case 4:
          iVar6 = FUN_00157f38(*(undefined8 *)(param_4 + 0x10),0,local_74);
          if ((local_74[0] == '\0') || (iVar6 != 0)) {
LAB_00148c60:
            if (iVar6 != 0) goto LAB_00148d08;
            goto LAB_001494c4;
          }
          if (((*(int *)(*(long *)(param_4 + 0x10) + 0x178) != 2) ||
              (*(char *)(*(long *)(param_4 + 0x10) + 0x418) != '\0')) &&
             (uVar7 = FUN_00166714(), (uVar7 & 1) == 0)) {
            bVar2 = (*(uint *)(*(long *)(param_4 + 0x10) + 0x41c) & 0x4000) == 0;
            iVar6 = 5;
            goto LAB_001490e0;
          }
          iVar6 = *(int *)(param_4 + 0x60);
          iVar3 = 0;
joined_r0x00148950:
          uVar4 = 5;
          if (iVar6 != 5) goto LAB_00148ec4;
          goto LAB_00149534;
        case 5:
          iVar6 = FUN_0015d3e8(*(undefined8 *)(param_4 + 0x10),local_7c);
          lVar12 = *(long *)(param_4 + 0x10);
          if (-1 < *(char *)(lVar12 + 0x41e)) {
            if (iVar6 != 0) goto LAB_00148b24;
            if (((*(int *)(lVar12 + 0x178) == 2) && (*(char *)(lVar12 + 0x418) == '\0')) ||
               (uVar7 = FUN_001666f0(), (uVar7 & 1) == 0)) goto LAB_001494bc;
            if (*(int *)(param_4 + 0x60) == 6) goto LAB_00148d38;
            uVar4 = 6;
LAB_00148ec0:
            iVar3 = -1;
            goto LAB_00148ec4;
          }
          FUN_00147a74(param_4,0,0);
          iVar3 = -1;
          if (*(int *)(param_4 + 0x60) == 2) goto LAB_00149534;
          *(undefined4 *)(param_4 + 0x60) = 2;
          FUN_0016116c(param_4);
          goto LAB_001490ec;
        case 6:
          iVar6 = FUN_0014fd84(*(undefined8 *)(param_4 + 0x10),local_7c);
          if ((iVar6 != 0) || (local_7c[0] != '\0')) {
            if (iVar6 == 0) {
              uVar4 = 8;
              if ((*(ulong *)(param_1 + 0xe8) & 1) == 0) {
                uVar4 = 9;
              }
              FUN_00147520(param_4,uVar4);
              goto LAB_001490f0;
            }
LAB_00148d08:
            FUN_0016134c(param_4);
            bVar2 = true;
            goto LAB_00149048;
          }
          iVar3 = 0;
          if (*(int *)(param_4 + 0x60) == 7) goto LAB_00149534;
          uVar4 = 7;
LAB_00148ec4:
          *(undefined4 *)(param_4 + 0x60) = uVar4;
          goto LAB_00149534;
        case 7:
          iVar6 = FUN_0014fd24(*(undefined8 *)(param_4 + 0x10),local_7c);
          if ((iVar6 != 0) || (local_7c[0] == '\0')) goto LAB_00148c60;
LAB_001489f8:
          bVar2 = (*(ulong *)(param_1 + 0xe8) & 1) == 0;
          iVar6 = 8;
LAB_001490e0:
          if (bVar2) {
            iVar6 = iVar6 + 1;
          }
LAB_001490e4:
          FUN_00147520(param_4,iVar6);
LAB_001490ec:
          iVar6 = 0;
LAB_001490f0:
          bVar2 = false;
          iVar3 = -1;
          break;
        case 8:
          uVar7 = FUN_00166c30(param_4,*(undefined8 *)(param_4 + 0x10));
          if ((uVar7 & 1) == 0) goto LAB_001494c4;
          if (*(int *)(param_4 + 0x60) != 9) {
            *(undefined4 *)(param_4 + 0x60) = 9;
            FUN_00166738(param_4);
            goto LAB_001490f0;
          }
          goto LAB_001492f8;
        case 9:
          plVar13 = *(long **)(param_4 + 0x10);
          if ((*(byte *)(param_4 + 0xf64) >> 6 & 1) == 0) {
            if (*(code **)(plVar13[0x88] + 0x10) != (code *)0x0) {
              iVar6 = (**(code **)(plVar13[0x88] + 0x10))(plVar13,local_80);
              if (iVar6 == 0x37) {
                if ((*(byte *)(*(long *)(param_4 + 0x10) + 0x41c) >> 1 & 1) != 0) {
                  local_90 = 0;
                  iVar6 = FUN_001615f0(*(long *)(param_4 + 0x10),&local_90);
                  bVar2 = iVar6 != 0;
                  if (!bVar2) {
                    iVar6 = 0x37;
                  }
                  FUN_0016134c(param_4);
                  iVar3 = FUN_00147a74(param_4,iVar6,0);
                  if (local_90 == 0) {
                    iVar3 = 0;
                    bVar2 = true;
                  }
                  else if (((iVar3 == 0x37) || (iVar6 = iVar3, iVar3 == 0)) &&
                          (iVar6 = FUN_00161354(param_4,local_90,2), iVar6 == 0)) {
                    if (*(int *)(param_4 + 0x60) != 2) {
                      *(undefined4 *)(param_4 + 0x60) = 2;
                      FUN_0016116c(param_4);
                    }
                    iVar6 = 0;
                    iVar3 = -1;
                  }
                  else {
                    iVar3 = 0;
                  }
                  FUN_00143300(local_90);
                  break;
                }
              }
              else if (iVar6 == 0) {
                if (local_80[0] != '\0') {
                  *(ushort *)(*plVar13 + 0x660) = *(ushort *)(*plVar13 + 0x660) & 0xffdf;
                  FUN_00146c9c(*plVar13,6);
                  goto LAB_00148a90;
                }
                goto LAB_00149174;
              }
              FUN_0016134c(param_4);
              if (*(long *)(param_4 + 0x10) != 0) goto LAB_00148b14;
              goto LAB_00148b24;
            }
LAB_00148a90:
            if (local_80[0] != '\0') {
              if ((*(byte *)(*(long *)(param_4 + 0x10) + 0x41d) >> 3 & 1) == 0) {
                if (*(int *)(param_4 + 0x60) == 0xc) goto LAB_00148d38;
                uVar4 = 0xc;
                goto LAB_00148ec0;
              }
              iVar3 = 0;
              uVar4 = 0xb;
              if (*(int *)(param_4 + 0x60) == 0xb) goto LAB_00149534;
              goto LAB_00148ec4;
            }
LAB_00149174:
            if (((*(ushort *)(param_4 + 0x15c4) >> 7 & 1) == 0) ||
               ((*(uint *)(param_4 + 0x15c8) | 2) != 7)) {
              iVar3 = 0;
              uVar4 = 10;
              if (*(int *)(param_4 + 0x60) != 10) goto LAB_00148ec4;
              goto LAB_00149534;
            }
            FUN_00147a74(param_4,0,0);
          }
          else {
            FUN_00158f30(plVar13,0);
          }
          if (*(int *)(param_4 + 0x60) != 0x10) {
            uVar4 = 0x10;
            goto LAB_00148ec0;
          }
LAB_00148d38:
          iVar3 = -1;
          goto LAB_00149534;
        case 10:
          iVar6 = FUN_0014fd54(*(undefined8 *)(param_4 + 0x10),local_80);
          if (iVar6 != 0) {
LAB_00148b08:
            FUN_0016134c(param_4);
LAB_00148b14:
            FUN_00147a74(param_4,iVar6,0);
            goto LAB_00148b24;
          }
          if (local_80[0] != '\0') {
            bVar2 = (*(uint *)(*(long *)(param_4 + 0x10) + 0x41c) & 0x800) == 0;
            iVar6 = 0xb;
            goto LAB_001490e0;
          }
          goto LAB_001494bc;
        case 0xb:
          plVar13 = *(long **)(param_4 + 0x10);
          local_88 = 0;
          if (*(code **)(plVar13[0x88] + 0x20) != (code *)0x0) {
            iVar6 = (**(code **)(plVar13[0x88] + 0x20))(plVar13,&local_88);
            if (iVar6 != 0) goto LAB_00148b08;
            if (local_88 == 1) {
              *(ushort *)(*plVar13 + 0x660) = *(ushort *)(*plVar13 + 0x660) & 0xffdf;
              FUN_00146c9c(*plVar13,6);
            }
            if (local_88 != 0) {
              iVar6 = 0xc;
              if (local_88 != 1) {
                iVar6 = 10;
              }
              goto LAB_001490e4;
            }
          }
LAB_001494bc:
          iVar6 = 0;
LAB_001494c4:
          iVar3 = 0;
          bVar2 = false;
          break;
        case 0xc:
          FUN_001668a4(param_4,*(undefined8 *)(param_4 + 0x10));
          lVar12 = *(long *)(param_4 + 0x10);
          if (((*(byte *)(lVar12 + 0x41f) >> 2 & 1) != 0) || (*(long *)(lVar12 + 0x4e0) != 0)) {
            FUN_0014a06c(param_1);
            lVar12 = *(long *)(param_4 + 0x10);
          }
          if ((*(int *)(lVar12 + 0x470) == -1) && (*(int *)(lVar12 + 0x474) == -1)) {
            if (((*(ushort *)(param_4 + 0x15c4) >> 7 & 1) != 0) &&
               ((*(byte *)(*(long *)(lVar12 + 0x440) + 0x85) >> 4 & 1) == 0)) {
              *(undefined4 *)(param_4 + 0x15c8) = 7;
            }
            if (*(int *)(param_4 + 0x60) != 0x10) {
              uVar4 = 0x10;
              goto LAB_001492f0;
            }
          }
          else if (*(int *)(param_4 + 0x60) != 0xd) {
            uVar4 = 0xd;
LAB_001492f0:
            *(undefined4 *)(param_4 + 0x60) = uVar4;
          }
          goto LAB_001492f8;
        case 0xd:
          uVar7 = FUN_00166c6c(param_4,*(undefined8 *)(param_4 + 0x10));
          if ((uVar7 & 1) == 0) goto LAB_001494c4;
          if (*(int *)(param_4 + 0x60) != 0xe) {
            uVar4 = 0xe;
            goto LAB_001492f0;
          }
LAB_001492f8:
          bVar2 = false;
          iVar3 = -1;
          goto LAB_001494d4;
        case 0xe:
          local_90 = 0;
          local_94[0] = '\0';
          if (*(long *)(param_4 + 0x7f0) < 1) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_00146e98(*(undefined8 *)(param_4 + 0xfb8),*(undefined8 *)(param_4 + 0x1068),
                                 *(long *)(param_4 + 0x7f0),*(undefined8 *)(param_4 + 0x1058),
                                 *(undefined8 *)(param_4 + 0x1060),local_70,uStack_68);
          }
          if (*(long *)(param_4 + 0x7f8) < 1) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_00146e98(*(undefined8 *)(param_4 + 0xfb0),*(undefined8 *)(param_4 + 0x1080),
                                 *(long *)(param_4 + 0x7f8),*(undefined8 *)(param_4 + 0x1070),
                                 *(undefined8 *)(param_4 + 0x1078),local_70,uStack_68);
          }
          if (iVar3 == 0 && iVar5 == 0) {
            iVar6 = FUN_00160400(*(undefined8 *)(param_4 + 0x10),param_4,local_84,local_94);
            uVar9 = *(uint *)(param_4 + 0x1c0);
            if ((uVar9 & 1) == 0) {
              FUN_00166ca8(*(undefined8 *)(param_4 + 0x10));
              uVar9 = *(uint *)(param_4 + 0x1c0);
            }
            if ((uVar9 >> 1 & 1) == 0) {
              FUN_00166894(*(undefined8 *)(param_4 + 0x10));
            }
            if ((local_84[0] == '\0') && (iVar6 != 0x38)) {
              if (iVar6 != 0x5c) goto LAB_00148fc0;
              uVar7 = FUN_0015aa24(*(undefined8 *)(param_4 + 0x10));
              if ((uVar7 & 1) != 0) {
                iVar3 = FUN_001615f0(*(undefined8 *)(param_4 + 0x10),&local_90);
                FUN_0014d430(param_4,"Forcing HTTP/1.1 for NTLM");
                *(undefined8 *)(param_4 + 0xa40) = 2;
                iVar6 = 0x5c;
                if (iVar3 == 0) {
                  if (local_90 != 0) goto LAB_00148fb4;
                }
                else {
                  iVar6 = iVar3;
                }
              }
LAB_00148fc4:
              if ((iVar6 != 0x5c) &&
                 ((*(uint *)(*(long *)(*(long *)(param_4 + 0x10) + 0x440) + 0x84) >> 1 & 1) == 0)) {
                FUN_00158f30(*(long *)(param_4 + 0x10),2);
              }
              FUN_0016134c(param_4);
              FUN_00147a74(param_4,iVar6,1);
              goto LAB_00148ffc;
            }
            iVar5 = FUN_001615f0(*(undefined8 *)(param_4 + 0x10),&local_90);
            iVar3 = iVar5;
            if (iVar6 != 0) {
              iVar3 = iVar6;
            }
            if (iVar5 == 0) {
              if (local_90 == 0) goto LAB_00148fc0;
LAB_00148fb4:
              bVar2 = true;
              local_84[0] = '\x01';
LAB_001491ec:
              FUN_0016134c(param_4);
              FUN_0014fa4c(param_4,*(long *)(param_4 + 0x10) + 0x4e8);
              puVar10 = *(undefined8 **)(*(long *)(param_4 + 0x10) + 0x4e8);
              if (puVar10 != (undefined8 *)0x0) {
                FUN_00147570(*puVar10,0,6);
              }
              if ((bool)(*(long *)(param_4 + 0x1d0) == 0 & (bVar2 ^ 1U))) {
                if (*(long *)(param_4 + 0x1c8) == 0) {
LAB_00149300:
                  bVar2 = false;
                }
                else {
                  FUN_00143300(local_90);
                  local_90 = *(long *)(param_4 + 0x1c8);
                  *(undefined8 *)(param_4 + 0x1c8) = 0;
                  iVar6 = FUN_00161354(param_4,local_90,1);
                  FUN_00143300(local_90);
                  if (iVar6 == 0) goto LAB_00149300;
                  bVar2 = true;
                  iVar6 = FUN_00147a74(param_4,iVar6,1);
                  if (iVar6 != 0) {
                    iVar3 = 0;
                    goto LAB_00149004;
                  }
                }
                if (*(int *)(param_4 + 0x60) != 0x10) {
                  *(undefined4 *)(param_4 + 0x60) = 0x10;
                }
                iVar6 = 0;
                iVar3 = -1;
                goto LAB_00149004;
              }
              if (bVar2) {
                uVar11 = 2;
              }
              else {
                FUN_00143300(local_90);
                local_90 = *(long *)(param_4 + 0x1d0);
                uVar11 = 3;
                *(undefined8 *)(param_4 + 0x1d0) = 0;
              }
              iVar6 = FUN_00147a74(param_4,0,0);
              if ((iVar6 == 0) && (iVar6 = FUN_00161354(param_4,local_90,uVar11), iVar6 == 0)) {
                if (*(int *)(param_4 + 0x60) != 2) {
                  *(undefined4 *)(param_4 + 0x60) = 2;
                  FUN_0016116c(param_4);
                }
                iVar6 = 0;
                iVar3 = -1;
              }
              else {
                iVar3 = 0;
              }
              FUN_00143300(local_90);
              goto LAB_00149000;
            }
            iVar6 = iVar3;
LAB_00148fc0:
            if (iVar6 != 0) goto LAB_00148fc4;
            if (local_84[0] != '\0') {
              bVar2 = false;
              goto LAB_001491ec;
            }
            iVar6 = 0;
            bVar2 = false;
            iVar3 = -(int)local_94[0];
          }
          else {
            FUN_00146dfc(param_4,local_70,uStack_68);
            if (*(int *)(param_4 + 0x60) != 0xf) {
              *(undefined4 *)(param_4 + 0x60) = 0xf;
            }
            if (iVar3 < iVar5) {
              iVar3 = iVar5;
            }
            FUN_00147570(param_4,(long)iVar3,9);
LAB_00148ffc:
            iVar3 = 0;
LAB_00149000:
            bVar2 = false;
          }
LAB_00149004:
          bVar2 = !bVar2;
LAB_001490c8:
          bVar2 = !bVar2;
          break;
        case 0xf:
          iVar6 = FUN_001466d0(*(undefined8 *)(param_4 + 0x10));
          if (iVar6 == 0) {
            iVar6 = FUN_001628cc(param_4,local_70,uStack_68);
            if (iVar6 == 0) {
              if (*(long *)(param_4 + 0x7f0) < 1) {
                iVar6 = 0;
              }
              else {
                iVar6 = FUN_00146e98(*(undefined8 *)(param_4 + 0xfb8),
                                     *(undefined8 *)(param_4 + 0x1068),*(long *)(param_4 + 0x7f0),
                                     *(undefined8 *)(param_4 + 0x1058),
                                     *(undefined8 *)(param_4 + 0x1060),local_70,uStack_68);
              }
              if (*(long *)(param_4 + 0x7f8) < 1) {
                iVar3 = 0;
              }
              else {
                iVar3 = FUN_00146e98(*(undefined8 *)(param_4 + 0xfb0),
                                     *(undefined8 *)(param_4 + 0x1080),*(long *)(param_4 + 0x7f8),
                                     *(undefined8 *)(param_4 + 0x1070),
                                     *(undefined8 *)(param_4 + 0x1078),local_70,uStack_68);
              }
              if (iVar6 == 0 && iVar3 == 0) {
                if (*(int *)(param_4 + 0x60) != 0xe) {
                  *(undefined4 *)(param_4 + 0x60) = 0xe;
                }
                FUN_00146dfc(param_4,local_70,uStack_68);
              }
              else {
                if (iVar6 < iVar3) {
                  iVar6 = iVar3;
                }
                FUN_00147570(param_4,(long)iVar6,9);
              }
              goto LAB_001494bc;
            }
            goto LAB_001494c4;
          }
          iVar3 = 0;
          bVar2 = false;
          iVar6 = 0x2a;
          break;
        case 0x10:
          iVar3 = iVar6;
          if (*(long *)(param_4 + 0x10) != 0) {
            FUN_0014fa4c(param_4,*(long *)(param_4 + 0x10) + 0x4e8);
            if (((*(byte *)(*(long *)(param_4 + 0x10) + 0x41f) >> 2 & 1) != 0) ||
               (*(long *)(*(long *)(param_4 + 0x10) + 0x4e0) != 0)) {
              FUN_0014a06c(param_1);
            }
            iVar3 = FUN_00147a74(param_4,iVar6,0);
            if (iVar6 != 0) {
              iVar3 = iVar6;
            }
            if (*(long *)(param_4 + 0x10) != 0) {
              *(undefined8 *)(param_4 + 0x10) = 0;
            }
          }
          iVar6 = iVar3;
          if ((*(ushort *)(param_4 + 0x15c4) >> 7 & 1) == 0) {
            iVar3 = *(int *)(param_4 + 0x60);
          }
          else {
            iVar3 = *(int *)(param_4 + 0x60);
            if (*(int *)(param_4 + 0x15c8) != 7) {
              if (iVar3 != 0) {
                uVar4 = 0;
                goto LAB_001492f0;
              }
              goto LAB_001492f8;
            }
          }
          if (iVar3 != 0x11) {
            *(undefined4 *)(param_4 + 0x60) = 0x11;
            *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) =
                 *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) + -1;
            *(undefined8 *)(param_4 + 0x10) = 0;
            FUN_001479e8(param_4);
          }
          goto LAB_001490f0;
        case 0x12:
          goto switchD_001487fc_caseD_12;
        default:
          return 4;
        }
switchD_001487fc_caseD_1:
        uVar9 = *(uint *)(param_4 + 0x60);
        if (uVar9 < 0x11) {
LAB_001494d4:
          if (iVar6 == 0) {
LAB_00149534:
            if ((*(long *)(param_4 + 0x10) == 0) || (iVar6 = FUN_001466d0(), iVar6 == 0)) {
              iVar6 = 0;
            }
            else {
              FUN_00158f30(*(undefined8 *)(param_4 + 0x10),2);
              uVar4 = 0x10;
              if (0xf < *(uint *)(param_4 + 0x60)) {
                uVar4 = 0x11;
              }
              FUN_00147520(param_4,uVar4);
              iVar3 = -1;
              iVar6 = 0x2a;
            }
          }
          else {
            FUN_0014a06c(param_1);
            if (*(long *)(param_4 + 0x10) == 0) {
              iVar3 = *(int *)(param_4 + 0x60);
              if (iVar3 == 2) {
                FUN_0016134c(param_4);
                goto LAB_00149590;
              }
            }
            else {
              FUN_00166894();
              FUN_00166ca8(*(undefined8 *)(param_4 + 0x10));
              FUN_0014fa4c(param_4,*(long *)(param_4 + 0x10) + 0x4c8);
              FUN_0014fa4c(param_4,*(long *)(param_4 + 0x10) + 0x4e8);
              if (bVar2) {
                FUN_0014f784(param_4,*(undefined8 *)(param_4 + 0x10),iVar6 == 0x1c);
                *(undefined8 *)(param_4 + 0x10) = 0;
              }
LAB_00149590:
              iVar3 = *(int *)(param_4 + 0x60);
            }
            if (iVar3 != 0x11) {
              *(undefined4 *)(param_4 + 0x60) = 0x11;
              *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) =
                   *(int *)(*(long *)(param_4 + 0xd8) + 0x1c) + -1;
              *(undefined8 *)(param_4 + 0x10) = 0;
              FUN_001479e8(param_4);
            }
            iVar3 = -1;
          }
          uVar9 = *(uint *)(param_4 + 0x60);
        }
        if (uVar9 == 0x11) {
          if (*(code **)(param_4 + 0xf38) == (code *)0x0) {
            *(long *)(param_4 + 0x88) = param_4;
            *(undefined4 *)(param_4 + 0x80) = 1;
            *(int *)(param_4 + 0x90) = iVar6;
            FUN_00143a90(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28),param_4 + 0x68,
                         param_4 + 0x68);
            iVar3 = 0;
          }
          else {
            (**(code **)(param_4 + 0xf38))(param_4,iVar6);
          }
          if (*(int *)(param_4 + 0x60) != 0x12) {
            *(undefined4 *)(param_4 + 0x60) = 0x12;
          }
        }
      } while ((iVar3 == -1) || (*(char *)(param_1 + 0xf0) != '\0'));
switchD_001487fc_caseD_12:
      uVar11 = 0;
      *(int *)(param_4 + 100) = iVar6;
    }
  }
  return uVar11;
}

