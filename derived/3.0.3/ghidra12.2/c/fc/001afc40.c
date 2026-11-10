
/* WARNING: Removing unreachable block (ram,0x001b25cc) */
/* WARNING: Removing unreachable block (ram,0x001b03ec) */
/* WARNING: Type propagation algorithm not settling */

void FUN_001afc40(long param_1)

{
  long ******pppppplVar1;
  undefined8 *******pppppppuVar2;
  long lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  char cVar12;
  long *plVar13;
  undefined1 *puVar14;
  long *******ppppppplVar15;
  bool bVar16;
  short sVar17;
  short sVar18;
  undefined2 uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined4 uVar23;
  uint *puVar24;
  ulong uVar25;
  long lVar26;
  undefined8 *******pppppppuVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long *******ppppppplVar35;
  long *******ppppppplVar36;
  long *******ppppppplVar37;
  long *****ppppplVar38;
  long *****ppppplVar39;
  long ******pppppplVar40;
  long *******ppppppplVar41;
  long *******ppppppplVar42;
  long *plVar43;
  undefined8 *puVar44;
  long *plVar45;
  long *******ppppppplVar46;
  long *plVar47;
  undefined8 *puVar48;
  long *plVar49;
  long *******ppppppplVar50;
  undefined *puVar51;
  long *plVar52;
  ulonglong uVar53;
  long *******ppppppplVar54;
  long ******pppppplVar55;
  long *******ppppppplVar56;
  undefined *puVar57;
  undefined8 *puVar58;
  char *pcVar59;
  undefined8 *******local_260;
  undefined8 local_258;
  undefined1 local_250;
  undefined1 local_24f;
  undefined1 local_24e;
  undefined1 local_24d;
  undefined1 local_24c;
  undefined1 local_24b;
  undefined1 local_24a;
  undefined1 local_249;
  long ******local_248;
  long ******local_240;
  undefined8 uStack_238;
  undefined2 local_230;
  long ******local_228;
  undefined1 local_220 [16];
  undefined1 *local_210;
  undefined8 uStack_208;
  undefined2 local_200;
  int iStack_1fc;
  char local_1f8;
  undefined1 local_1f7;
  long *******local_1d0;
  long *******local_1c8;
  long local_1c0;
  undefined8 *******local_1b8;
  undefined1 local_1b0 [16];
  undefined1 *local_1a0;
  undefined8 uStack_198;
  undefined8 *******local_190;
  undefined1 local_188;
  undefined7 uStack_187;
  undefined1 *local_178;
  undefined8 uStack_170;
  char local_128;
  undefined8 ******local_120;
  undefined8 local_118;
  long *local_108;
  long *******local_100;
  long local_f8;
  long *******local_f0;
  long *******local_e8;
  long local_e0;
  char local_b8;
  undefined1 local_b7;
  long *******local_b0;
  long *******local_a8;
  long local_a0;
  long *******local_98;
  long *******local_90;
  long local_88;
  long *******local_80;
  undefined8 local_78;
  undefined1 uStack_69;
  undefined8 *******local_68;
  
  puVar58 = (undefined8 *)PTR_DAT_04bcb910;
  pcVar59 = PTR_DAT_04bcb908;
  puVar57 = PTR_DAT_04bcb900;
  plVar49 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar24 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar21 = *puVar24;
    if (uVar21 != 0) {
      lVar32 = **(long **)(puVar57 + 0xa0);
      if ((ulong)((*(long **)(puVar57 + 0xa0))[1] - lVar32 >> 3) <= (ulong)uVar21) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar49 = (long *)(*(long *)(lVar32 + (ulong)uVar21 * 8) + 0x20);
    }
  }
  if ((*plVar49 == 0) || (lVar32 = *(long *)(*plVar49 + 0x10), lVar32 == 0)) {
    lVar32 = 0;
  }
  else {
    lVar32 = *(long *)(lVar32 + 0x10);
  }
  plVar45 = (long *)(lVar32 + 0x78);
  (**(code **)(*plVar45 + 0x10))(plVar45);
  plVar49 = (long *)(puVar57 + 0x18);
  if (*pcVar59 != '\0') {
    puVar24 = (uint *)FUN_03876070(*puVar58);
    uVar21 = *puVar24;
    if (uVar21 != 0) {
      lVar32 = **(long **)(puVar57 + 0xa0);
      if ((ulong)((*(long **)(puVar57 + 0xa0))[1] - lVar32 >> 3) <= (ulong)uVar21) {
LAB_001b3024:
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar49 = (long *)(*(long *)(lVar32 + (ulong)uVar21 * 8) + 0x10);
    }
  }
  if ((*(char *)(*(long *)(*plVar49 + 0x10) + 0x179) != '\0') && (*(long *)(param_1 + 0x48) != 0)) {
    pppppplVar1 = (long ******)(PTR_DAT_04bc0ec8 + 0x10);
    pppppppuVar2 = (undefined8 *******)(PTR_DAT_04bcc2d8 + 0x10);
    puVar51 = PTR_DAT_04bc0ec8;
    do {
      if (*(char *)(param_1 + 0x192) == '\0') {
        lVar32 = *(long *)(param_1 + 0x60);
        if (lVar32 == param_1 + 0x58) {
          uVar21 = 0;
        }
        else {
          uVar21 = 0;
          do {
            if (*(char *)(lVar32 + 0x80) == '\0') {
              FUN_001b8590(lVar32 + 0x18);
            }
            local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
            local_240 = (long ******)&DAT_00000010;
            local_260 = (undefined8 *******)pppppplVar1;
            local_248 = (long ******)&local_258;
            FUN_0018b070(&local_260,&DAT_0410a6b7,0xffffffffffffffff);
            plVar52 = (long *)(lVar32 + 0x38);
            plVar49 = (long *)*plVar52;
            if (plVar49 == (long *)0x0) {
LAB_001afecc:
              plVar49 = (long *)(lVar32 + 0x50);
              plVar52 = (long *)*plVar49;
              if (plVar52 == (long *)0x0) {
                uVar53 = 0;
                goto LAB_001afe14;
              }
              plVar47 = plVar49;
              do {
                uVar25 = FUN_0018b4e0(plVar52 + 4,&local_260);
                plVar43 = plVar52 + 1;
                if ((uVar25 & 1) == 0) {
                  plVar47 = plVar52;
                  plVar43 = plVar52;
                }
                plVar52 = (long *)*plVar43;
              } while (plVar52 != (long *)0x0);
              if (plVar47 == plVar49) {
                uVar53 = 0;
                goto LAB_001afe14;
              }
              uVar25 = FUN_0018b4e0(&local_260,plVar47 + 4);
              puVar51 = PTR_DAT_04bc0ec8;
              if ((uVar25 & 1) == 0) {
                uVar53 = strtoull((char *)plVar47[0xc],(char **)0x0,10);
                FUN_001b8e80(&local_120,lVar32 + 0x18,&DAT_0410a6b7,uVar53);
              }
              else {
                uVar53 = 0;
              }
            }
            else {
              plVar47 = plVar52;
              do {
                uVar25 = FUN_0018b4e0(plVar49 + 4,&local_260);
                plVar43 = plVar49 + 1;
                if ((uVar25 & 1) == 0) {
                  plVar47 = plVar49;
                  plVar43 = plVar49;
                }
                plVar49 = (long *)*plVar43;
              } while (plVar49 != (long *)0x0);
              if ((plVar47 == plVar52) ||
                 (uVar25 = FUN_0018b4e0(&local_260,plVar47 + 4), (uVar25 & 1) != 0))
              goto LAB_001afecc;
              uVar53 = plVar47[9];
LAB_001afe14:
              puVar51 = PTR_DAT_04bc0ec8;
            }
            local_260 = (undefined8 *******)(puVar51 + 0x10);
            FUN_0018b1a0(&local_260);
            lVar32 = *(long *)(lVar32 + 8);
            uVar21 = ((uint)uVar53 >> 1 & 1) + uVar21;
          } while (lVar32 != param_1 + 0x58);
        }
        uVar20 = FUN_001af704();
        if ((uVar20 <= uVar21) || (*(long *)(param_1 + 0x98) != 0)) break;
      }
      lVar33 = *(long *)(param_1 + 0x40);
      lVar32 = lVar33 + 0x10;
      lVar26 = FUN_001b8fa0(lVar32,"probeinit",0);
      uVar23 = *(undefined4 *)(param_1 + 0x28);
      plVar49 = (long *)(puVar57 + 0x18);
      local_1c0 = 0;
      local_1d0 = (long *******)&local_1d0;
      local_1c8 = (long *******)&local_1d0;
      if (*pcVar59 != '\0') {
        puVar24 = (uint *)FUN_03876070(*puVar58);
        uVar21 = *puVar24;
        if (uVar21 != 0) {
          lVar34 = **(long **)(puVar57 + 0xa0);
          if ((ulong)((*(long **)(puVar57 + 0xa0))[1] - lVar34 >> 3) <= (ulong)uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar49 = (long *)(*(long *)(lVar34 + (ulong)uVar21 * 8) + 0x10);
        }
      }
      if ((*plVar49 == 0) || (lVar34 = *(long *)(*plVar49 + 0x10), lVar34 == 0)) {
        lVar34 = 0;
      }
      else {
        lVar34 = *(long *)(lVar34 + 0xe8);
      }
      pppppplVar55 = (long ******)(puVar51 + 0x10);
      local_250 = 0;
      uStack_238 = 0x10;
      local_260 = pppppppuVar2;
      local_258 = pppppplVar55;
      local_240 = (long ******)&local_250;
      FUN_0018b070(&local_258,*(undefined8 *)(lVar34 + 0x168),0xffffffffffffffff);
      local_230 = *(undefined2 *)(lVar34 + 0x178);
      local_220[0] = 0;
      uStack_208 = 0x10;
      local_228 = pppppplVar55;
      local_210 = local_220;
      FUN_0018b070(&local_228,*(undefined8 *)(lVar34 + 0x198),0xffffffffffffffff);
      local_90 = (long *******)((ulong)local_90 & 0xffffffffffffff00);
      local_78 = 0x10;
      local_1f8 = (char)*(undefined8 *)(lVar34 + 0x1b0);
      local_1f7 = (undefined1)((ulong)*(undefined8 *)(lVar34 + 0x1b0) >> 8);
      local_98 = (long *******)pppppplVar55;
      local_80 = (long *******)&local_90;
      FUN_0018b070(&local_98,local_210,0xffffffffffffffff);
      FUN_001abf78(&local_260);
      lVar34 = FUN_001b8fa0(lVar32,"probeinit",0);
      local_b0 = (long *******)&local_b0;
      plVar49 = (long *)(puVar57 + 0x18);
      local_a0 = 0;
      local_a8 = local_b0;
      if (*pcVar59 != '\0') {
        puVar24 = (uint *)FUN_03876070(*puVar58);
        uVar21 = *puVar24;
        if (uVar21 != 0) {
          lVar3 = **(long **)(puVar57 + 0xa0);
          if ((ulong)((*(long **)(puVar57 + 0xa0))[1] - lVar3 >> 3) <= (ulong)uVar21)
          goto LAB_001b3024;
          plVar49 = (long *)(*(long *)(lVar3 + (ulong)uVar21 * 8) + 0x10);
        }
      }
      FUN_001a6570(*(undefined8 *)(*plVar49 + 0x10),uVar23,&local_b0);
      FUN_001b8014(&local_120);
      FUN_001b8014(&local_190);
      for (ppppppplVar46 = local_a8; (long ********)ppppppplVar46 != &local_b0;
          ppppppplVar46 = (long *******)ppppppplVar46[1]) {
        ppppppplVar41 = ppppppplVar46 + 2;
        if (*(char *)(ppppppplVar46 + 0xf) == '\0') {
          FUN_001b8590(ppppppplVar41);
        }
        local_260 = (undefined8 *******)(puVar51 + 0x10);
        local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
        local_240 = (long ******)&DAT_00000010;
        local_248 = (long ******)&local_258;
        FUN_0018b070(&local_260,&DAT_0410a6c4,0xffffffffffffffff);
        ppppppplVar56 = ppppppplVar46 + 6;
        ppppppplVar50 = (long *******)*ppppppplVar56;
        if (ppppppplVar50 == (long *******)0x0) {
LAB_001b020c:
          ppppppplVar50 = ppppppplVar46 + 9;
          ppppppplVar54 = (long *******)*ppppppplVar50;
          if (ppppppplVar54 != (long *******)0x0) {
            ppppppplVar42 = ppppppplVar50;
            do {
              uVar25 = FUN_0018b4e0(ppppppplVar54 + 4,&local_260);
              ppppppplVar35 = ppppppplVar54 + 1;
              if ((uVar25 & 1) == 0) {
                ppppppplVar42 = ppppppplVar54;
                ppppppplVar35 = ppppppplVar54;
              }
              ppppppplVar54 = (long *******)*ppppppplVar35;
            } while (ppppppplVar54 != (long *******)0x0);
            if (ppppppplVar42 != ppppppplVar50) {
              uVar25 = FUN_0018b4e0(&local_260,ppppppplVar42 + 4);
              puVar51 = PTR_DAT_04bc0ec8;
              if ((uVar25 & 1) == 0) {
                pppppplVar55 = (long ******)strtoull((char *)ppppppplVar42[0xc],(char **)0x0,10);
                FUN_001b8e80(&local_1b8,ppppppplVar41,&DAT_0410a6c4,pppppplVar55);
              }
              else {
                pppppplVar55 = (long ******)0xffffffff;
              }
              goto LAB_001b02c0;
            }
          }
          pppppplVar55 = (long ******)0xffffffff;
          puVar51 = PTR_DAT_04bc0ec8;
        }
        else {
          ppppppplVar54 = ppppppplVar56;
          do {
            uVar25 = FUN_0018b4e0(ppppppplVar50 + 4,&local_260);
            ppppppplVar42 = ppppppplVar50 + 1;
            if ((uVar25 & 1) == 0) {
              ppppppplVar54 = ppppppplVar50;
              ppppppplVar42 = ppppppplVar50;
            }
            ppppppplVar50 = (long *******)*ppppppplVar42;
          } while (ppppppplVar50 != (long *******)0x0);
          if ((ppppppplVar54 == ppppppplVar56) ||
             (uVar25 = FUN_0018b4e0(&local_260,ppppppplVar54 + 4), (uVar25 & 1) != 0))
          goto LAB_001b020c;
          pppppplVar55 = ppppppplVar54[9];
          puVar51 = PTR_DAT_04bc0ec8;
        }
LAB_001b02c0:
        local_260 = (undefined8 *******)(puVar51 + 0x10);
        FUN_0018b1a0(&local_260);
        if ((int)pppppplVar55 + 1U < 2) {
          if (*(char *)(ppppppplVar46 + 0xf) == '\0') {
            FUN_001b8590(ppppppplVar41);
          }
          local_260 = (undefined8 *******)(puVar51 + 0x10);
          local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
          local_240 = (long ******)&DAT_00000010;
          local_248 = (long ******)&local_258;
          FUN_0018b070(&local_260,&DAT_0410a6b7,0xffffffffffffffff);
          ppppppplVar50 = (long *******)*ppppppplVar56;
          if (ppppppplVar50 == (long *******)0x0) {
LAB_001b0360:
            puVar51 = PTR_DAT_04bc0ec8;
            ppppppplVar50 = ppppppplVar46 + 9;
            ppppppplVar56 = (long *******)*ppppppplVar50;
            if (ppppppplVar56 == (long *******)0x0) {
              local_260 = (undefined8 *******)(PTR_DAT_04bc0ec8 + 0x10);
              FUN_0018b1a0(&local_260);
            }
            else {
              ppppppplVar54 = ppppppplVar50;
              do {
                uVar25 = FUN_0018b4e0(ppppppplVar56 + 4,&local_260);
                puVar51 = PTR_DAT_04bc0ec8;
                ppppppplVar42 = ppppppplVar56 + 1;
                if ((uVar25 & 1) == 0) {
                  ppppppplVar54 = ppppppplVar56;
                  ppppppplVar42 = ppppppplVar56;
                }
                ppppppplVar56 = (long *******)*ppppppplVar42;
              } while (ppppppplVar56 != (long *******)0x0);
              if (ppppppplVar54 == ppppppplVar50) {
                local_260 = (undefined8 *******)(PTR_DAT_04bc0ec8 + 0x10);
                FUN_0018b1a0(&local_260);
              }
              else {
                uVar25 = FUN_0018b4e0(&local_260,ppppppplVar54 + 4);
                puVar51 = PTR_DAT_04bc0ec8;
                if ((uVar25 & 1) == 0) {
                  uVar53 = strtoull((char *)ppppppplVar54[0xc],(char **)0x0,10);
                  FUN_001b8e80(&local_1b8,ppppppplVar41,&DAT_0410a6b7,uVar53);
                  local_260 = (undefined8 *******)(puVar51 + 0x10);
                  FUN_0018b1a0(&local_260);
                  if (((uint)uVar53 >> 2 & 1) != 0) goto LAB_001b0160;
                }
                else {
                  local_260 = (undefined8 *******)(PTR_DAT_04bc0ec8 + 0x10);
                  FUN_0018b1a0(&local_260);
                }
              }
            }
LAB_001b0480:
            uVar21 = FUN_001b8fa0(ppppppplVar41,&DAT_0410a6b7,0);
            if ((uVar21 >> 1 & 1) != 0) goto LAB_001b016c;
            pppppppuVar27 = &local_190;
          }
          else {
            ppppppplVar54 = ppppppplVar56;
            do {
              uVar25 = FUN_0018b4e0(ppppppplVar50 + 4,&local_260);
              ppppppplVar42 = ppppppplVar50 + 1;
              if ((uVar25 & 1) == 0) {
                ppppppplVar54 = ppppppplVar50;
                ppppppplVar42 = ppppppplVar50;
              }
              ppppppplVar50 = (long *******)*ppppppplVar42;
            } while (ppppppplVar50 != (long *******)0x0);
            if (ppppppplVar54 == ppppppplVar56) goto LAB_001b0360;
            uVar25 = FUN_0018b4e0(&local_260,ppppppplVar54 + 4);
            puVar51 = PTR_DAT_04bc0ec8;
            if ((uVar25 & 1) != 0) goto LAB_001b0360;
            pppppplVar55 = ppppppplVar54[9];
            local_260 = (undefined8 *******)(PTR_DAT_04bc0ec8 + 0x10);
            FUN_0018b1a0(&local_260);
            if (((uint)pppppplVar55 >> 2 & 1) == 0) goto LAB_001b0480;
LAB_001b0160:
            pppppppuVar27 = &local_120;
          }
          FUN_001b83dc(pppppppuVar27,ppppppplVar41);
        }
LAB_001b016c:
      }
      if (local_b8 == '\0') {
        FUN_001b8590(&local_120);
      }
      sVar17 = FUN_001e14f8(local_118);
      if (sVar17 != 0) {
        if (lVar34 == 0) {
          if (local_128 == '\0') {
            FUN_001b8590(&local_190);
            sVar18 = FUN_001e14f8(CONCAT71(uStack_187,local_188));
          }
          else {
            sVar18 = FUN_001e14f8(CONCAT71(uStack_187,local_188));
          }
          if (sVar18 != 0) {
            local_260 = (undefined8 *******)((ulong)local_260 & 0xffffffffffffff00);
            if (local_128 == '\0') {
              FUN_001b8590(&local_190);
              iVar22 = FUN_001e1884(CONCAT71(uStack_187,local_188));
            }
            else {
              iVar22 = FUN_001e1884(CONCAT71(uStack_187,local_188));
            }
            if (iVar22 != 0) {
              FUN_001e188c(CONCAT71(uStack_187,local_188),&local_260,0x80);
            }
            pppppppuVar27 = (undefined8 *******)(puVar51 + 0x10);
            local_1b0[0] = 0;
            uStack_198 = 0x10;
            local_1b8 = pppppppuVar27;
            local_1a0 = local_1b0;
            FUN_0018b070(&local_1b8,&local_260,0xffffffffffffffff);
            local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
            local_240 = (long ******)0x10;
            local_260 = pppppppuVar27;
            local_248 = (long ******)&local_258;
            FUN_0018b070(&local_260,"Ntrpa",0xffffffffffffffff);
            FUN_001dd950(&local_f0,&local_260);
            local_260 = pppppppuVar27;
            FUN_0018b1a0(&local_260);
            local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
            local_240 = (long ******)&DAT_00000010;
            local_260 = pppppppuVar27;
            local_248 = (long ******)&local_258;
            FUN_0018b070(&local_260,"Ntrpa",0xffffffffffffffff);
            local_68 = &local_260;
            lVar34 = FUN_001dda60(&local_f0,&local_260,PTR_piecewise_construct_04bcbf80,&local_68,
                                  &uStack_69);
            FUN_00189504(lVar34 + 0x48,&local_1b8);
            local_260 = pppppppuVar27;
            FUN_0018b1a0(&local_260);
            local_1b8 = pppppppuVar27;
            FUN_0018b1a0(&local_1b8);
            if (local_128 == '\0') {
              FUN_001b8590(&local_190);
            }
            uVar19 = FUN_001e14f8(CONCAT71(uStack_187,local_188));
            FUN_001b8e80(&local_260,&local_120,"Ntrpp",uVar19);
            puVar51 = PTR_DAT_04bc0ec8;
          }
          ppppppplVar46 = (long *******)FUN_00187df4(0x80);
          pppppppuVar27 = &local_120;
        }
        else {
          local_260 = (undefined8 *******)((ulong)local_260 & 0xffffffffffffff00);
          if (*(char *)(lVar33 + 0x78) == '\0') {
            FUN_001b8590(lVar32);
            iVar22 = FUN_001e1884(*(undefined8 *)(lVar33 + 0x18));
          }
          else {
            iVar22 = FUN_001e1884(*(undefined8 *)(lVar33 + 0x18));
          }
          if (iVar22 != 0) {
            FUN_001e188c(*(undefined8 *)(lVar33 + 0x18),&local_260,0x80);
          }
          local_1b0[0] = 0;
          uStack_198 = 0x10;
          local_1b8 = (undefined8 *******)(puVar51 + 0x10);
          local_1a0 = local_1b0;
          FUN_0018b070(&local_1b8,&local_260,0xffffffffffffffff);
          uVar25 = FUN_0018b44c(local_1a0,local_80);
          local_1b8 = (undefined8 *******)(puVar51 + 0x10);
          FUN_0018b1a0(&local_1b8);
          ppppppplVar46 = (long *******)FUN_00187df4(0x80);
          *ppppppplVar46 = (long ******)0x0;
          FUN_001b8358(ppppppplVar46 + 2,&local_120);
          *ppppppplVar46 = (long ******)local_1d0;
          ppppppplVar46[1] = (long ******)&local_1d0;
          local_1d0[1] = (long ******)ppppppplVar46;
          local_1c0 = local_1c0 + 1;
          local_1d0 = ppppppplVar46;
          if ((uVar25 & 1) == 0) goto LAB_001b0754;
          ppppppplVar46 = (long *******)FUN_00187df4(0x80);
          pppppppuVar27 = &local_190;
        }
        *ppppppplVar46 = (long ******)0x0;
        FUN_001b8358(ppppppplVar46 + 2,pppppppuVar27);
        *ppppppplVar46 = (long ******)local_1d0;
        ppppppplVar46[1] = (long ******)&local_1d0;
        local_1d0[1] = (long ******)ppppppplVar46;
        local_1c0 = local_1c0 + 1;
        local_1d0 = ppppppplVar46;
      }
LAB_001b0754:
      FUN_001b8504(&local_190);
      FUN_001b8504(&local_120);
      if (local_a0 != 0) {
        pppppplVar55 = *local_a8;
        pppppplVar55[1] = (long *****)local_b0[1];
        *local_b0[1] = (long *****)pppppplVar55;
        local_a0 = 0;
        ppppppplVar46 = local_a8;
        while ((long ********)ppppppplVar46 != &local_b0) {
          ppppppplVar41 = (long *******)ppppppplVar46[1];
          (*(code *)*ppppppplVar46[2])();
          FUN_00187e4c(ppppppplVar46);
          ppppppplVar46 = ppppppplVar41;
        }
      }
      local_98 = (long *******)(puVar51 + 0x10);
      FUN_0018b1a0(&local_98);
      if (sVar17 != 0) {
        if ((long ********)local_1c8 != &local_1d0) {
          plVar49 = (long *)(lVar33 + 0x30);
          plVar52 = (long *)(lVar33 + 0x48);
          ppppppplVar46 = local_1c8;
          do {
            ppppppplVar41 = ppppppplVar46 + 2;
            FUN_001b8358(&local_120);
            uVar21 = *(uint *)(param_1 + 0x28);
            if (local_b8 == '\0') {
              FUN_001b8590(&local_120);
            }
            pppppplVar55 = (long ******)(puVar51 + 0x10);
            local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
            local_240 = (long ******)0x10;
            local_260 = (undefined8 *******)pppppplVar55;
            local_248 = (long ******)&local_258;
            FUN_0018b070(&local_260,"RVCID",0xffffffffffffffff);
            if (local_e8 != (long *******)0x0) {
              ppppppplVar56 = local_e8;
              ppppppplVar50 = (long *******)&local_e8;
              do {
                ppppppplVar42 = ppppppplVar50;
                ppppppplVar35 = ppppppplVar56;
                uVar25 = FUN_0018b4e0(ppppppplVar35 + 4,&local_260);
                ppppppplVar50 = ppppppplVar42;
                ppppppplVar54 = ppppppplVar35 + 1;
                if ((uVar25 & 1) == 0) {
                  ppppppplVar50 = ppppppplVar35;
                  ppppppplVar54 = ppppppplVar35;
                }
                ppppppplVar56 = (long *******)*ppppppplVar54;
              } while ((long *******)*ppppppplVar54 != (long *******)0x0);
              if ((long ********)ppppppplVar50 != &local_e8) {
                ppppppplVar56 = ppppppplVar42;
                ppppppplVar54 = ppppppplVar42 + 4;
                if ((uVar25 & 1) == 0) {
                  ppppppplVar56 = ppppppplVar35;
                  ppppppplVar54 = ppppppplVar35 + 4;
                }
                uVar28 = FUN_0018b4e0(&local_260,ppppppplVar54);
                puVar57 = PTR_DAT_04bc0ec8;
                if ((uVar28 & 1) == 0) {
                  ppppppplVar36 = ppppppplVar42 + 1;
                  if ((uVar25 & 1) == 0) {
                    ppppppplVar36 = ppppppplVar35 + 1;
                  }
                  ppppppplVar15 = (long *******)*ppppppplVar36;
                  ppppppplVar37 = ppppppplVar50;
                  if ((long *******)*ppppppplVar36 == (long *******)0x0) {
                    do {
                      ppppppplVar36 = (long *******)ppppppplVar37[2];
                      bVar16 = (long *******)*ppppppplVar36 != ppppppplVar37;
                      ppppppplVar37 = ppppppplVar36;
                    } while (bVar16);
                  }
                  else {
                    do {
                      ppppppplVar36 = ppppppplVar15;
                      ppppppplVar15 = (long *******)*ppppppplVar36;
                    } while ((long *******)*ppppppplVar36 != (long *******)0x0);
                  }
                  if (local_f0 == ppppppplVar50) {
                    local_f0 = ppppppplVar36;
                  }
                  local_e0 = local_e0 + -1;
                  FUN_00192390(local_e8,ppppppplVar50);
                  if ((uVar25 & 1) == 0) {
                    ppppppplVar42 = ppppppplVar35;
                  }
                  ppppppplVar42[9] = (long ******)(puVar57 + 0x10);
                  FUN_0018b1a0(ppppppplVar42 + 9);
                  ppppppplVar56[4] = (long ******)(puVar57 + 0x10);
                  FUN_0018b1a0(ppppppplVar54);
                  FUN_00187e4c(ppppppplVar50);
                }
              }
            }
            local_260 = (undefined8 *******)pppppplVar55;
            FUN_0018b1a0(&local_260);
            local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
            local_240 = (long ******)0x10;
            local_260 = (undefined8 *******)pppppplVar55;
            local_248 = (long ******)&local_258;
            FUN_0018b070(&local_260,"RVCID",0xffffffffffffffff);
            puVar57 = PTR_DAT_04bc0ec8;
            ppppppplVar50 = (long *******)&local_100;
            ppppppplVar56 = (long *******)&local_100;
            if (local_100 != (long *******)0x0) {
              ppppppplVar54 = local_100;
              do {
                while( true ) {
                  ppppppplVar56 = ppppppplVar54;
                  uVar25 = FUN_0018b4e0(&local_260,ppppppplVar56 + 4);
                  if ((uVar25 & 1) != 0) break;
                  uVar25 = FUN_0018b4e0(ppppppplVar56 + 4,&local_260);
                  if ((uVar25 & 1) == 0) {
                    ppppppplVar54 = (long *******)*ppppppplVar50;
                    if (ppppppplVar54 != (long *******)0x0) goto LAB_001b0cd4;
                    goto LAB_001b0a50;
                  }
                  ppppppplVar50 = ppppppplVar56 + 1;
                  ppppppplVar54 = (long *******)*ppppppplVar50;
                  if ((long *******)*ppppppplVar50 == (long *******)0x0) goto LAB_001b0a50;
                }
                ppppppplVar54 = (long *******)*ppppppplVar56;
                ppppppplVar50 = ppppppplVar56;
              } while ((long *******)*ppppppplVar56 != (long *******)0x0);
            }
LAB_001b0a50:
            ppppppplVar54 = (long *******)FUN_00187df4(0x50);
            ppppppplVar54[4] = (long ******)(puVar57 + 0x10);
            ppppppplVar42 = ppppppplVar54 + 5;
            *(undefined1 *)ppppppplVar42 = 0;
            ppppppplVar54[7] = (long ******)ppppppplVar42;
            ppppppplVar54[8] = (long ******)0x10;
            if (&local_260 != (undefined8 ********)(ppppppplVar54 + 4)) {
              *(undefined4 *)(ppppppplVar54 + 5) = (undefined4)local_258;
              *(undefined4 *)((long)ppppppplVar54 + 0x2c) = local_258._4_4_;
              uVar4 = *(undefined1 *)(ppppppplVar54 + 6);
              *(undefined1 *)(ppppppplVar54 + 6) = local_250;
              uVar5 = *(undefined1 *)((long)ppppppplVar54 + 0x31);
              local_258 = (long ******)((ulong)*(uint7 *)((long)ppppppplVar54 + 0x29) << 8);
              *(undefined1 *)((long)ppppppplVar54 + 0x31) = local_24f;
              uVar6 = *(undefined1 *)((long)ppppppplVar54 + 0x32);
              *(undefined1 *)((long)ppppppplVar54 + 0x32) = local_24e;
              uVar7 = *(undefined1 *)((long)ppppppplVar54 + 0x33);
              *(undefined1 *)((long)ppppppplVar54 + 0x33) = local_24d;
              uVar8 = *(undefined1 *)((long)ppppppplVar54 + 0x34);
              *(undefined1 *)((long)ppppppplVar54 + 0x34) = local_24c;
              uVar9 = *(undefined1 *)((long)ppppppplVar54 + 0x35);
              *(undefined1 *)((long)ppppppplVar54 + 0x35) = local_24b;
              uVar10 = *(undefined1 *)((long)ppppppplVar54 + 0x36);
              *(undefined1 *)((long)ppppppplVar54 + 0x36) = local_24a;
              uVar11 = *(undefined1 *)((long)ppppppplVar54 + 0x37);
              *(undefined1 *)((long)ppppppplVar54 + 0x37) = local_249;
              ppppppplVar54[7] = local_248;
              ppppppplVar54[8] = local_240;
              bVar16 = local_248 == (long ******)&local_258;
              local_240 = (long ******)0x10;
              local_250 = uVar4;
              local_24f = uVar5;
              local_24e = uVar6;
              local_24d = uVar7;
              local_24c = uVar8;
              local_24b = uVar9;
              local_24a = uVar10;
              local_249 = uVar11;
              local_248 = (long ******)&local_258;
              if (bVar16) {
                ppppppplVar54[7] = (long ******)ppppppplVar42;
              }
            }
            ppppppplVar54[9] = (long ******)0x0;
            *ppppppplVar54 = (long ******)0x0;
            ppppppplVar54[1] = (long ******)0x0;
            ppppppplVar54[2] = (long ******)ppppppplVar56;
            *ppppppplVar50 = (long ******)ppppppplVar54;
            ppppppplVar56 = ppppppplVar54;
            if ((long *)*local_108 != (long *)0x0) {
              ppppppplVar56 = (long *******)*ppppppplVar50;
              local_108 = (long *)*local_108;
            }
            bVar16 = ppppppplVar56 == local_100;
            *(bool *)(ppppppplVar56 + 3) = bVar16;
joined_r0x001b0b80:
            if ((bVar16) || (pppppplVar55 = ppppppplVar56[2], *(char *)(pppppplVar55 + 3) != '\0'))
            goto LAB_001b0cc8;
            ppppppplVar50 = (long *******)pppppplVar55[2];
            pppppplVar40 = *ppppppplVar50;
            if (pppppplVar40 != pppppplVar55) {
              if ((pppppplVar40 == (long ******)0x0) ||
                 (pppppplVar40 = pppppplVar40 + 3, *(char *)pppppplVar40 != '\0')) {
                if ((long *******)*pppppplVar55 == ppppppplVar56) {
                  pppppplVar40 = ppppppplVar56[1];
                  *pppppplVar55 = (long *****)pppppplVar40;
                  if (pppppplVar40 != (long ******)0x0) {
                    pppppplVar40[2] = (long *****)pppppplVar55;
                    ppppppplVar50 = (long *******)pppppplVar55[2];
                  }
                  ppppppplVar56[2] = (long ******)ppppppplVar50;
                  pppppplVar55[2][(long ******)*pppppplVar55[2] != pppppplVar55] =
                       (long ****)ppppppplVar56;
                  ppppppplVar56[1] = pppppplVar55;
                  pppppplVar55[2] = (long *****)ppppppplVar56;
                  ppppppplVar50 = (long *******)ppppppplVar56[2];
                  *(undefined1 *)(ppppppplVar56 + 3) = 1;
                  pppppplVar55 = ppppppplVar50[1];
                  *(undefined1 *)(ppppppplVar50 + 3) = 0;
                  pppppplVar40 = (long ******)*pppppplVar55;
                  ppppppplVar50[1] = pppppplVar40;
                }
                else {
                  *(undefined1 *)(pppppplVar55 + 3) = 1;
                  pppppplVar55 = ppppppplVar50[1];
                  *(undefined1 *)(ppppppplVar50 + 3) = 0;
                  pppppplVar40 = (long ******)*pppppplVar55;
                  ppppppplVar50[1] = pppppplVar40;
                }
                if (pppppplVar40 != (long ******)0x0) {
                  pppppplVar40[2] = (long *****)ppppppplVar50;
                }
                pppppplVar55[2] = (long *****)ppppppplVar50[2];
                ppppppplVar50[2][(long *******)*ppppppplVar50[2] != ppppppplVar50] =
                     (long *****)pppppplVar55;
                *pppppplVar55 = (long *****)ppppppplVar50;
                goto LAB_001b0cc4;
              }
LAB_001b0b90:
              bVar16 = ppppppplVar50 == local_100;
              *(undefined1 *)(pppppplVar55 + 3) = 1;
              *(bool *)(ppppppplVar50 + 3) = bVar16;
              *(char *)pppppplVar40 = '\x01';
              ppppppplVar56 = ppppppplVar50;
              goto joined_r0x001b0b80;
            }
            if ((ppppppplVar50[1] != (long ******)0x0) &&
               (pppppplVar40 = ppppppplVar50[1] + 3, *(char *)pppppplVar40 == '\0'))
            goto LAB_001b0b90;
            if ((long *******)*pppppplVar55 == ppppppplVar56) {
              *(undefined1 *)(pppppplVar55 + 3) = 1;
              *(undefined1 *)(ppppppplVar50 + 3) = 0;
              pppppplVar40 = (long ******)pppppplVar55[1];
              *ppppppplVar50 = pppppplVar40;
            }
            else {
              ppppplVar38 = pppppplVar55[1];
              ppppplVar39 = (long *****)*ppppplVar38;
              pppppplVar55[1] = ppppplVar39;
              if (ppppplVar39 != (long *****)0x0) {
                ppppplVar39[2] = (long ****)pppppplVar55;
                ppppppplVar50 = (long *******)pppppplVar55[2];
              }
              ppppplVar38[2] = (long ****)ppppppplVar50;
              pppppplVar55[2][(long ******)*pppppplVar55[2] != pppppplVar55] =
                   (long ****)ppppplVar38;
              *ppppplVar38 = (long ****)pppppplVar55;
              pppppplVar55[2] = ppppplVar38;
              ppppppplVar50 = (long *******)ppppplVar38[2];
              pppppplVar55 = *ppppppplVar50;
              *(undefined1 *)(ppppplVar38 + 3) = 1;
              *(undefined1 *)(ppppppplVar50 + 3) = 0;
              pppppplVar40 = (long ******)pppppplVar55[1];
              *ppppppplVar50 = pppppplVar40;
            }
            if (pppppplVar40 != (long ******)0x0) {
              pppppplVar40[2] = (long *****)ppppppplVar50;
            }
            pppppplVar55[2] = (long *****)ppppppplVar50[2];
            ppppppplVar50[2][(long *******)*ppppppplVar50[2] != ppppppplVar50] =
                 (long *****)pppppplVar55;
            pppppplVar55[1] = (long *****)ppppppplVar50;
LAB_001b0cc4:
            ppppppplVar50[2] = pppppplVar55;
LAB_001b0cc8:
            local_f8 = local_f8 + 1;
LAB_001b0cd4:
            ppppppplVar54[9] = (long ******)(ulong)uVar21;
            pppppplVar55 = (long ******)(puVar57 + 0x10);
            local_260 = (undefined8 *******)pppppplVar55;
            FUN_0018b1a0(&local_260);
            local_b7 = 0;
            local_190 = (undefined8 *******)CONCAT44(local_190._4_4_,0x10001);
            FUN_0018aa70(&local_260,&local_190);
            if (local_b8 == '\0') {
              FUN_001b8590(&local_120);
            }
            local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
            local_240 = (long ******)0x10;
            local_260 = (undefined8 *******)pppppplVar55;
            local_248 = (long ******)&local_258;
            FUN_0018b070(&local_260,"probeinit",0xffffffffffffffff);
            pcVar59 = PTR_DAT_04bcb908;
            puVar57 = PTR_DAT_04bcb900;
            if (local_e8 != (long *******)0x0) {
              ppppppplVar56 = local_e8;
              ppppppplVar50 = (long *******)&local_e8;
              do {
                ppppppplVar42 = ppppppplVar50;
                ppppppplVar35 = ppppppplVar56;
                uVar25 = FUN_0018b4e0(ppppppplVar35 + 4,&local_260);
                ppppppplVar50 = ppppppplVar42;
                ppppppplVar54 = ppppppplVar35 + 1;
                if ((uVar25 & 1) == 0) {
                  ppppppplVar50 = ppppppplVar35;
                  ppppppplVar54 = ppppppplVar35;
                }
                ppppppplVar56 = (long *******)*ppppppplVar54;
              } while ((long *******)*ppppppplVar54 != (long *******)0x0);
              if ((long ********)ppppppplVar50 != &local_e8) {
                ppppppplVar56 = ppppppplVar42;
                ppppppplVar54 = ppppppplVar42 + 4;
                if ((uVar25 & 1) == 0) {
                  ppppppplVar56 = ppppppplVar35;
                  ppppppplVar54 = ppppppplVar35 + 4;
                }
                uVar28 = FUN_0018b4e0(&local_260,ppppppplVar54);
                puVar51 = PTR_DAT_04bc0ec8;
                if ((uVar28 & 1) == 0) {
                  ppppppplVar36 = ppppppplVar42 + 1;
                  if ((uVar25 & 1) == 0) {
                    ppppppplVar36 = ppppppplVar35 + 1;
                  }
                  ppppppplVar15 = (long *******)*ppppppplVar36;
                  ppppppplVar37 = ppppppplVar50;
                  if ((long *******)*ppppppplVar36 == (long *******)0x0) {
                    do {
                      ppppppplVar36 = (long *******)ppppppplVar37[2];
                      bVar16 = (long *******)*ppppppplVar36 != ppppppplVar37;
                      ppppppplVar37 = ppppppplVar36;
                    } while (bVar16);
                  }
                  else {
                    do {
                      ppppppplVar36 = ppppppplVar15;
                      ppppppplVar15 = (long *******)*ppppppplVar36;
                    } while ((long *******)*ppppppplVar36 != (long *******)0x0);
                  }
                  if (local_f0 == ppppppplVar50) {
                    local_f0 = ppppppplVar36;
                  }
                  local_e0 = local_e0 + -1;
                  FUN_00192390(local_e8,ppppppplVar50);
                  if ((uVar25 & 1) == 0) {
                    ppppppplVar42 = ppppppplVar35;
                  }
                  ppppppplVar42[9] = (long ******)(puVar51 + 0x10);
                  FUN_0018b1a0(ppppppplVar42 + 9);
                  ppppppplVar56[4] = (long ******)(puVar51 + 0x10);
                  FUN_0018b1a0(ppppppplVar54);
                  FUN_00187e4c(ppppppplVar50);
                }
              }
            }
            puVar51 = PTR_DAT_04bc0ec8;
            pppppplVar55 = (long ******)(PTR_DAT_04bc0ec8 + 0x10);
            local_260 = (undefined8 *******)pppppplVar55;
            FUN_0018b1a0(&local_260);
            local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
            local_240 = (long ******)0x10;
            local_260 = (undefined8 *******)pppppplVar55;
            local_248 = (long ******)&local_258;
            FUN_0018b070(&local_260,"probeinit",0xffffffffffffffff);
            ppppppplVar50 = (long *******)&local_100;
            ppppppplVar56 = (long *******)&local_100;
            if (local_100 != (long *******)0x0) {
              ppppppplVar54 = local_100;
              do {
                while( true ) {
                  ppppppplVar56 = ppppppplVar54;
                  uVar25 = FUN_0018b4e0(&local_260,ppppppplVar56 + 4);
                  if ((uVar25 & 1) != 0) break;
                  uVar25 = FUN_0018b4e0(ppppppplVar56 + 4,&local_260);
                  if ((uVar25 & 1) == 0) {
                    ppppppplVar54 = (long *******)*ppppppplVar50;
                    if (ppppppplVar54 != (long *******)0x0) goto LAB_001b1194;
                    goto LAB_001b0f20;
                  }
                  ppppppplVar50 = ppppppplVar56 + 1;
                  ppppppplVar54 = (long *******)*ppppppplVar50;
                  if ((long *******)*ppppppplVar50 == (long *******)0x0) goto LAB_001b0f20;
                }
                ppppppplVar54 = (long *******)*ppppppplVar56;
                ppppppplVar50 = ppppppplVar56;
              } while ((long *******)*ppppppplVar56 != (long *******)0x0);
            }
LAB_001b0f20:
            ppppppplVar54 = (long *******)FUN_00187df4(0x50);
            ppppppplVar42 = ppppppplVar54 + 5;
            *(undefined1 *)ppppppplVar42 = 0;
            ppppppplVar54[4] = pppppplVar55;
            ppppppplVar54[7] = (long ******)ppppppplVar42;
            ppppppplVar54[8] = (long ******)0x10;
            if (&local_260 != (undefined8 ********)(ppppppplVar54 + 4)) {
              *(undefined4 *)(ppppppplVar54 + 5) = (undefined4)local_258;
              *(undefined4 *)((long)ppppppplVar54 + 0x2c) = local_258._4_4_;
              uVar4 = *(undefined1 *)(ppppppplVar54 + 6);
              *(undefined1 *)(ppppppplVar54 + 6) = local_250;
              uVar5 = *(undefined1 *)((long)ppppppplVar54 + 0x31);
              local_258 = (long ******)((ulong)*(uint7 *)((long)ppppppplVar54 + 0x29) << 8);
              *(undefined1 *)((long)ppppppplVar54 + 0x31) = local_24f;
              uVar6 = *(undefined1 *)((long)ppppppplVar54 + 0x32);
              *(undefined1 *)((long)ppppppplVar54 + 0x32) = local_24e;
              uVar7 = *(undefined1 *)((long)ppppppplVar54 + 0x33);
              *(undefined1 *)((long)ppppppplVar54 + 0x33) = local_24d;
              uVar8 = *(undefined1 *)((long)ppppppplVar54 + 0x34);
              *(undefined1 *)((long)ppppppplVar54 + 0x34) = local_24c;
              uVar9 = *(undefined1 *)((long)ppppppplVar54 + 0x35);
              *(undefined1 *)((long)ppppppplVar54 + 0x35) = local_24b;
              uVar10 = *(undefined1 *)((long)ppppppplVar54 + 0x36);
              *(undefined1 *)((long)ppppppplVar54 + 0x36) = local_24a;
              uVar11 = *(undefined1 *)((long)ppppppplVar54 + 0x37);
              *(undefined1 *)((long)ppppppplVar54 + 0x37) = local_249;
              ppppppplVar54[7] = local_248;
              ppppppplVar54[8] = local_240;
              bVar16 = local_248 == (long ******)&local_258;
              local_240 = (long ******)0x10;
              local_250 = uVar4;
              local_24f = uVar5;
              local_24e = uVar6;
              local_24d = uVar7;
              local_24c = uVar8;
              local_24b = uVar9;
              local_24a = uVar10;
              local_249 = uVar11;
              local_248 = (long ******)&local_258;
              if (bVar16) {
                ppppppplVar54[7] = (long ******)ppppppplVar42;
              }
            }
            ppppppplVar54[9] = (long ******)0x0;
            *ppppppplVar54 = (long ******)0x0;
            ppppppplVar54[1] = (long ******)0x0;
            ppppppplVar54[2] = (long ******)ppppppplVar56;
            *ppppppplVar50 = (long ******)ppppppplVar54;
            ppppppplVar56 = ppppppplVar54;
            if ((long *)*local_108 != (long *)0x0) {
              ppppppplVar56 = (long *******)*ppppppplVar50;
              local_108 = (long *)*local_108;
            }
            bVar16 = ppppppplVar56 == local_100;
            *(bool *)(ppppppplVar56 + 3) = bVar16;
joined_r0x001b104c:
            if ((bVar16) || (pppppplVar55 = ppppppplVar56[2], *(char *)(pppppplVar55 + 3) != '\0'))
            goto LAB_001b1188;
            ppppppplVar50 = (long *******)pppppplVar55[2];
            pppppplVar40 = *ppppppplVar50;
            if (pppppplVar40 != pppppplVar55) {
              if ((pppppplVar40 == (long ******)0x0) ||
                 (pppppplVar40 = pppppplVar40 + 3, *(char *)pppppplVar40 != '\0')) {
                if ((long *******)*pppppplVar55 == ppppppplVar56) {
                  pppppplVar40 = ppppppplVar56[1];
                  *pppppplVar55 = (long *****)pppppplVar40;
                  if (pppppplVar40 != (long ******)0x0) {
                    pppppplVar40[2] = (long *****)pppppplVar55;
                    ppppppplVar50 = (long *******)pppppplVar55[2];
                  }
                  ppppppplVar56[2] = (long ******)ppppppplVar50;
                  pppppplVar55[2][(long ******)*pppppplVar55[2] != pppppplVar55] =
                       (long ****)ppppppplVar56;
                  ppppppplVar56[1] = pppppplVar55;
                  pppppplVar55[2] = (long *****)ppppppplVar56;
                  ppppppplVar50 = (long *******)ppppppplVar56[2];
                  *(undefined1 *)(ppppppplVar56 + 3) = 1;
                  pppppplVar55 = ppppppplVar50[1];
                  *(undefined1 *)(ppppppplVar50 + 3) = 0;
                  pppppplVar40 = (long ******)*pppppplVar55;
                  ppppppplVar50[1] = pppppplVar40;
                }
                else {
                  *(undefined1 *)(pppppplVar55 + 3) = 1;
                  pppppplVar55 = ppppppplVar50[1];
                  *(undefined1 *)(ppppppplVar50 + 3) = 0;
                  pppppplVar40 = (long ******)*pppppplVar55;
                  ppppppplVar50[1] = pppppplVar40;
                }
                if (pppppplVar40 != (long ******)0x0) {
                  pppppplVar40[2] = (long *****)ppppppplVar50;
                }
                pppppplVar55[2] = (long *****)ppppppplVar50[2];
                ppppppplVar50[2][(long *******)*ppppppplVar50[2] != ppppppplVar50] =
                     (long *****)pppppplVar55;
                *pppppplVar55 = (long *****)ppppppplVar50;
                goto LAB_001b1184;
              }
LAB_001b1054:
              bVar16 = ppppppplVar50 == local_100;
              *(undefined1 *)(pppppplVar55 + 3) = 1;
              *(bool *)(ppppppplVar50 + 3) = bVar16;
              *(char *)pppppplVar40 = '\x01';
              ppppppplVar56 = ppppppplVar50;
              goto joined_r0x001b104c;
            }
            if ((ppppppplVar50[1] != (long ******)0x0) &&
               (pppppplVar40 = ppppppplVar50[1] + 3, *(char *)pppppplVar40 == '\0'))
            goto LAB_001b1054;
            if ((long *******)*pppppplVar55 == ppppppplVar56) {
              *(undefined1 *)(pppppplVar55 + 3) = 1;
              *(undefined1 *)(ppppppplVar50 + 3) = 0;
              pppppplVar40 = (long ******)pppppplVar55[1];
              *ppppppplVar50 = pppppplVar40;
            }
            else {
              ppppplVar38 = pppppplVar55[1];
              ppppplVar39 = (long *****)*ppppplVar38;
              pppppplVar55[1] = ppppplVar39;
              if (ppppplVar39 != (long *****)0x0) {
                ppppplVar39[2] = (long ****)pppppplVar55;
                ppppppplVar50 = (long *******)pppppplVar55[2];
              }
              ppppplVar38[2] = (long ****)ppppppplVar50;
              pppppplVar55[2][(long ******)*pppppplVar55[2] != pppppplVar55] =
                   (long ****)ppppplVar38;
              *ppppplVar38 = (long ****)pppppplVar55;
              pppppplVar55[2] = ppppplVar38;
              ppppppplVar50 = (long *******)ppppplVar38[2];
              pppppplVar55 = *ppppppplVar50;
              *(undefined1 *)(ppppplVar38 + 3) = 1;
              *(undefined1 *)(ppppppplVar50 + 3) = 0;
              pppppplVar40 = (long ******)pppppplVar55[1];
              *ppppppplVar50 = pppppplVar40;
            }
            if (pppppplVar40 != (long ******)0x0) {
              pppppplVar40[2] = (long *****)ppppppplVar50;
            }
            pppppplVar55[2] = (long *****)ppppppplVar50[2];
            ppppppplVar50[2][(long *******)*ppppppplVar50[2] != ppppppplVar50] =
                 (long *****)pppppplVar55;
            pppppplVar55[1] = (long *****)ppppppplVar50;
LAB_001b1184:
            ppppppplVar50[2] = pppppplVar55;
LAB_001b1188:
            local_f8 = local_f8 + 1;
LAB_001b1194:
            ppppppplVar54[9] = (long ******)(ulong)(lVar26 == 0);
            local_260 = (undefined8 *******)(puVar51 + 0x10);
            FUN_0018b1a0(&local_260);
            local_b7 = 0;
            local_190 = (undefined8 *******)CONCAT44(local_190._4_4_,0x10001);
            FUN_0018aa70(&local_260,&local_190);
            if (*(char *)(lVar33 + 0x78) == '\0') {
              FUN_001b8590(lVar32);
            }
            local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
            local_240 = (long ******)0x10;
            local_260 = (undefined8 *******)(puVar51 + 0x10);
            local_248 = (long ******)&local_258;
            FUN_0018b070(&local_260,&DAT_0410a695,0xffffffffffffffff);
            plVar47 = (long *)*plVar49;
            if (plVar47 == (long *)0x0) {
LAB_001b124c:
              plVar47 = (long *)*plVar52;
              if (plVar47 != (long *)0x0) {
                plVar43 = plVar52;
                do {
                  uVar25 = FUN_0018b4e0(plVar47 + 4,&local_260);
                  plVar13 = plVar47 + 1;
                  if ((uVar25 & 1) == 0) {
                    plVar43 = plVar47;
                    plVar13 = plVar47;
                  }
                  plVar47 = (long *)*plVar13;
                } while (plVar47 != (long *)0x0);
                if ((plVar43 != plVar52) &&
                   (uVar25 = FUN_0018b4e0(&local_260,plVar43 + 4), (uVar25 & 1) == 0)) {
                  uVar25 = strtoull((char *)plVar43[0xc],(char **)0x0,10);
                  FUN_001b8e80(&local_190,lVar32,&DAT_0410a695,uVar25);
                  local_260 = (undefined8 *******)(puVar51 + 0x10);
                  FUN_0018b1a0(&local_260);
                  goto joined_r0x001b1a78;
                }
              }
              uVar25 = 0;
              local_260 = (undefined8 *******)(puVar51 + 0x10);
              FUN_0018b1a0(&local_260);
            }
            else {
              plVar43 = plVar49;
              do {
                uVar25 = FUN_0018b4e0(plVar47 + 4,&local_260);
                plVar13 = plVar47 + 1;
                if ((uVar25 & 1) == 0) {
                  plVar43 = plVar47;
                  plVar13 = plVar47;
                }
                plVar47 = (long *)*plVar13;
              } while (plVar47 != (long *)0x0);
              if ((plVar43 == plVar49) ||
                 (uVar25 = FUN_0018b4e0(&local_260,plVar43 + 4), (uVar25 & 1) != 0))
              goto LAB_001b124c;
              uVar25 = (ulong)*(uint *)(plVar43 + 9);
              local_260 = (undefined8 *******)(puVar51 + 0x10);
              FUN_0018b1a0(&local_260);
            }
joined_r0x001b1a78:
            if (local_b8 == '\0') {
              FUN_001b8590(&local_120);
            }
            local_260 = (undefined8 *******)(puVar51 + 0x10);
            local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
            local_240 = (long ******)0x10;
            local_248 = (long ******)&local_258;
            FUN_0018b070(&local_260,&DAT_0410a695,0xffffffffffffffff);
            if (local_e8 != (long *******)0x0) {
              ppppppplVar56 = local_e8;
              ppppppplVar50 = (long *******)&local_e8;
              do {
                ppppppplVar42 = ppppppplVar50;
                ppppppplVar35 = ppppppplVar56;
                uVar28 = FUN_0018b4e0(ppppppplVar35 + 4,&local_260);
                ppppppplVar50 = ppppppplVar42;
                ppppppplVar54 = ppppppplVar35 + 1;
                if ((uVar28 & 1) == 0) {
                  ppppppplVar50 = ppppppplVar35;
                  ppppppplVar54 = ppppppplVar35;
                }
                ppppppplVar56 = (long *******)*ppppppplVar54;
              } while ((long *******)*ppppppplVar54 != (long *******)0x0);
              if ((long ********)ppppppplVar50 != &local_e8) {
                ppppppplVar56 = ppppppplVar42;
                ppppppplVar54 = ppppppplVar42 + 4;
                if ((uVar28 & 1) == 0) {
                  ppppppplVar56 = ppppppplVar35;
                  ppppppplVar54 = ppppppplVar35 + 4;
                }
                uVar29 = FUN_0018b4e0(&local_260,ppppppplVar54);
                puVar51 = PTR_DAT_04bc0ec8;
                if ((uVar29 & 1) == 0) {
                  ppppppplVar36 = ppppppplVar42 + 1;
                  if ((uVar28 & 1) == 0) {
                    ppppppplVar36 = ppppppplVar35 + 1;
                  }
                  ppppppplVar15 = (long *******)*ppppppplVar36;
                  ppppppplVar37 = ppppppplVar50;
                  if ((long *******)*ppppppplVar36 == (long *******)0x0) {
                    do {
                      ppppppplVar36 = (long *******)ppppppplVar37[2];
                      bVar16 = (long *******)*ppppppplVar36 != ppppppplVar37;
                      ppppppplVar37 = ppppppplVar36;
                    } while (bVar16);
                  }
                  else {
                    do {
                      ppppppplVar36 = ppppppplVar15;
                      ppppppplVar15 = (long *******)*ppppppplVar36;
                    } while ((long *******)*ppppppplVar36 != (long *******)0x0);
                  }
                  if (local_f0 == ppppppplVar50) {
                    local_f0 = ppppppplVar36;
                  }
                  local_e0 = local_e0 + -1;
                  FUN_00192390(local_e8,ppppppplVar50);
                  if ((uVar28 & 1) == 0) {
                    ppppppplVar42 = ppppppplVar35;
                  }
                  ppppppplVar42[9] = (long ******)(puVar51 + 0x10);
                  FUN_0018b1a0(ppppppplVar42 + 9);
                  ppppppplVar56[4] = (long ******)(puVar51 + 0x10);
                  FUN_0018b1a0(ppppppplVar54);
                  FUN_00187e4c(ppppppplVar50);
                }
              }
            }
            puVar51 = PTR_DAT_04bc0ec8;
            pppppplVar55 = (long ******)(PTR_DAT_04bc0ec8 + 0x10);
            local_260 = (undefined8 *******)pppppplVar55;
            FUN_0018b1a0(&local_260);
            local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
            local_240 = (long ******)&DAT_00000010;
            local_260 = (undefined8 *******)pppppplVar55;
            local_248 = (long ******)&local_258;
            FUN_0018b070(&local_260,&DAT_0410a695,0xffffffffffffffff);
            puVar58 = (undefined8 *)PTR_DAT_04bcb910;
            ppppppplVar50 = (long *******)&local_100;
            ppppppplVar56 = (long *******)&local_100;
            if (local_100 != (long *******)0x0) {
              ppppppplVar54 = local_100;
              do {
                while( true ) {
                  ppppppplVar56 = ppppppplVar54;
                  uVar28 = FUN_0018b4e0(&local_260,ppppppplVar56 + 4);
                  if ((uVar28 & 1) != 0) break;
                  uVar28 = FUN_0018b4e0(ppppppplVar56 + 4,&local_260);
                  if ((uVar28 & 1) == 0) {
                    ppppppplVar54 = (long *******)*ppppppplVar50;
                    if (ppppppplVar54 != (long *******)0x0) goto LAB_001b1744;
                    goto LAB_001b14b0;
                  }
                  ppppppplVar50 = ppppppplVar56 + 1;
                  ppppppplVar54 = (long *******)*ppppppplVar50;
                  if ((long *******)*ppppppplVar50 == (long *******)0x0) goto LAB_001b14b0;
                }
                ppppppplVar54 = (long *******)*ppppppplVar56;
                ppppppplVar50 = ppppppplVar56;
              } while ((long *******)*ppppppplVar56 != (long *******)0x0);
            }
LAB_001b14b0:
            ppppppplVar54 = (long *******)FUN_00187df4(0x50);
            ppppppplVar42 = ppppppplVar54 + 5;
            *(undefined1 *)ppppppplVar42 = 0;
            ppppppplVar54[4] = pppppplVar55;
            ppppppplVar54[7] = (long ******)ppppppplVar42;
            ppppppplVar54[8] = (long ******)0x10;
            if (&local_260 != (undefined8 ********)(ppppppplVar54 + 4)) {
              *(undefined4 *)(ppppppplVar54 + 5) = (undefined4)local_258;
              *(undefined4 *)((long)ppppppplVar54 + 0x2c) = local_258._4_4_;
              uVar4 = *(undefined1 *)(ppppppplVar54 + 6);
              *(undefined1 *)(ppppppplVar54 + 6) = local_250;
              uVar5 = *(undefined1 *)((long)ppppppplVar54 + 0x31);
              local_258 = (long ******)((ulong)*(uint7 *)((long)ppppppplVar54 + 0x29) << 8);
              *(undefined1 *)((long)ppppppplVar54 + 0x31) = local_24f;
              uVar6 = *(undefined1 *)((long)ppppppplVar54 + 0x32);
              *(undefined1 *)((long)ppppppplVar54 + 0x32) = local_24e;
              uVar7 = *(undefined1 *)((long)ppppppplVar54 + 0x33);
              *(undefined1 *)((long)ppppppplVar54 + 0x33) = local_24d;
              uVar8 = *(undefined1 *)((long)ppppppplVar54 + 0x34);
              *(undefined1 *)((long)ppppppplVar54 + 0x34) = local_24c;
              uVar9 = *(undefined1 *)((long)ppppppplVar54 + 0x35);
              *(undefined1 *)((long)ppppppplVar54 + 0x35) = local_24b;
              uVar10 = *(undefined1 *)((long)ppppppplVar54 + 0x36);
              *(undefined1 *)((long)ppppppplVar54 + 0x36) = local_24a;
              uVar11 = *(undefined1 *)((long)ppppppplVar54 + 0x37);
              *(undefined1 *)((long)ppppppplVar54 + 0x37) = local_249;
              ppppppplVar54[7] = local_248;
              ppppppplVar54[8] = local_240;
              bVar16 = local_248 == (long ******)&local_258;
              local_240 = (long ******)&DAT_00000010;
              local_250 = uVar4;
              local_24f = uVar5;
              local_24e = uVar6;
              local_24d = uVar7;
              local_24c = uVar8;
              local_24b = uVar9;
              local_24a = uVar10;
              local_249 = uVar11;
              local_248 = (long ******)&local_258;
              if (bVar16) {
                ppppppplVar54[7] = (long ******)ppppppplVar42;
              }
            }
            ppppppplVar54[9] = (long ******)0x0;
            *ppppppplVar54 = (long ******)0x0;
            ppppppplVar54[1] = (long ******)0x0;
            ppppppplVar54[2] = (long ******)ppppppplVar56;
            *ppppppplVar50 = (long ******)ppppppplVar54;
            ppppppplVar56 = ppppppplVar54;
            if ((long *)*local_108 != (long *)0x0) {
              ppppppplVar56 = (long *******)*ppppppplVar50;
              local_108 = (long *)*local_108;
            }
            bVar16 = ppppppplVar56 == local_100;
            *(bool *)(ppppppplVar56 + 3) = bVar16;
joined_r0x001b15dc:
            if ((bVar16) || (pppppplVar55 = ppppppplVar56[2], *(char *)(pppppplVar55 + 3) != '\0'))
            goto LAB_001b1738;
            ppppppplVar50 = (long *******)pppppplVar55[2];
            pppppplVar40 = *ppppppplVar50;
            if (pppppplVar40 != pppppplVar55) {
              if ((pppppplVar40 == (long ******)0x0) ||
                 (pppppplVar40 = pppppplVar40 + 3, *(char *)pppppplVar40 != '\0')) {
                if ((long *******)*pppppplVar55 == ppppppplVar56) {
                  pppppplVar40 = ppppppplVar56[1];
                  *pppppplVar55 = (long *****)pppppplVar40;
                  if (pppppplVar40 != (long ******)0x0) {
                    pppppplVar40[2] = (long *****)pppppplVar55;
                    ppppppplVar50 = (long *******)pppppplVar55[2];
                  }
                  ppppppplVar56[2] = (long ******)ppppppplVar50;
                  pppppplVar55[2][(long ******)*pppppplVar55[2] != pppppplVar55] =
                       (long ****)ppppppplVar56;
                  ppppppplVar56[1] = pppppplVar55;
                  pppppplVar55[2] = (long *****)ppppppplVar56;
                  ppppppplVar50 = (long *******)ppppppplVar56[2];
                  *(undefined1 *)(ppppppplVar56 + 3) = 1;
                  pppppplVar55 = ppppppplVar50[1];
                  *(undefined1 *)(ppppppplVar50 + 3) = 0;
                  pppppplVar40 = (long ******)*pppppplVar55;
                  ppppppplVar50[1] = pppppplVar40;
                }
                else {
                  *(undefined1 *)(pppppplVar55 + 3) = 1;
                  pppppplVar55 = ppppppplVar50[1];
                  *(undefined1 *)(ppppppplVar50 + 3) = 0;
                  pppppplVar40 = (long ******)*pppppplVar55;
                  ppppppplVar50[1] = pppppplVar40;
                }
                if (pppppplVar40 != (long ******)0x0) {
                  pppppplVar40[2] = (long *****)ppppppplVar50;
                }
                pppppplVar55[2] = (long *****)ppppppplVar50[2];
                ppppppplVar50[2][(long *******)*ppppppplVar50[2] != ppppppplVar50] =
                     (long *****)pppppplVar55;
                *pppppplVar55 = (long *****)ppppppplVar50;
                goto LAB_001b1734;
              }
LAB_001b15e4:
              bVar16 = ppppppplVar50 == local_100;
              *(undefined1 *)(pppppplVar55 + 3) = 1;
              *(bool *)(ppppppplVar50 + 3) = bVar16;
              *(char *)pppppplVar40 = '\x01';
              ppppppplVar56 = ppppppplVar50;
              goto joined_r0x001b15dc;
            }
            if ((ppppppplVar50[1] != (long ******)0x0) &&
               (pppppplVar40 = ppppppplVar50[1] + 3, *(char *)pppppplVar40 == '\0'))
            goto LAB_001b15e4;
            if ((long *******)*pppppplVar55 == ppppppplVar56) {
              *(undefined1 *)(pppppplVar55 + 3) = 1;
              *(undefined1 *)(ppppppplVar50 + 3) = 0;
              pppppplVar40 = (long ******)pppppplVar55[1];
              *ppppppplVar50 = pppppplVar40;
            }
            else {
              ppppplVar38 = pppppplVar55[1];
              ppppplVar39 = (long *****)*ppppplVar38;
              pppppplVar55[1] = ppppplVar39;
              if (ppppplVar39 != (long *****)0x0) {
                ppppplVar39[2] = (long ****)pppppplVar55;
                ppppppplVar50 = (long *******)pppppplVar55[2];
              }
              ppppplVar38[2] = (long ****)ppppppplVar50;
              pppppplVar55[2][(long ******)*pppppplVar55[2] != pppppplVar55] =
                   (long ****)ppppplVar38;
              *ppppplVar38 = (long ****)pppppplVar55;
              pppppplVar55[2] = ppppplVar38;
              ppppppplVar50 = (long *******)ppppplVar38[2];
              pppppplVar55 = *ppppppplVar50;
              *(undefined1 *)(ppppplVar38 + 3) = 1;
              *(undefined1 *)(ppppppplVar50 + 3) = 0;
              pppppplVar40 = (long ******)pppppplVar55[1];
              *ppppppplVar50 = pppppplVar40;
            }
            if (pppppplVar40 != (long ******)0x0) {
              pppppplVar40[2] = (long *****)ppppppplVar50;
            }
            pppppplVar55[2] = (long *****)ppppppplVar50[2];
            ppppppplVar50[2][(long *******)*ppppppplVar50[2] != ppppppplVar50] =
                 (long *****)pppppplVar55;
            pppppplVar55[1] = (long *****)ppppppplVar50;
LAB_001b1734:
            ppppppplVar50[2] = pppppplVar55;
LAB_001b1738:
            local_f8 = local_f8 + 1;
LAB_001b1744:
            ppppppplVar54[9] = (long ******)(uVar25 & 0xffffffff);
            local_260 = (undefined8 *******)(puVar51 + 0x10);
            FUN_0018b1a0(&local_260);
            local_b7 = 0;
            local_190 = (undefined8 *******)CONCAT44(local_190._4_4_,0x10001);
            FUN_0018aa70(&local_260,&local_190);
            plVar47 = (long *)(puVar57 + 0x18);
            if (*pcVar59 != '\0') {
              puVar24 = (uint *)FUN_03876070(*puVar58);
              uVar21 = *puVar24;
              if (uVar21 != 0) {
                lVar34 = **(long **)(puVar57 + 0xa0);
                if ((ulong)((*(long **)(puVar57 + 0xa0))[1] - lVar34 >> 3) <= (ulong)uVar21)
                goto LAB_001b3024;
                plVar47 = (long *)(*(long *)(lVar34 + (ulong)uVar21 * 8) + 0x10);
              }
            }
            lVar34 = (**(code **)(**(long **)(*(long *)(*plVar47 + 0x10) + 0xe8) + 0x80))();
            if (*(char *)(lVar34 + 0x10) != '\0') {
              plVar47 = (long *)(puVar57 + 0x18);
              if (*pcVar59 != '\0') {
                puVar24 = (uint *)FUN_03876070(*puVar58);
                uVar21 = *puVar24;
                if (uVar21 != 0) {
                  lVar34 = **(long **)(puVar57 + 0xa0);
                  if ((ulong)((*(long **)(puVar57 + 0xa0))[1] - lVar34 >> 3) <= (ulong)uVar21)
                  goto LAB_001b3024;
                  plVar47 = (long *)(*(long *)(lVar34 + (ulong)uVar21 * 8) + 0x10);
                }
              }
              lVar34 = (**(code **)(**(long **)(*(long *)(*plVar47 + 0x10) + 0xe8) + 0x80))();
              FUN_001e1564(&local_260,lVar34 + 0x20);
              FUN_001e18ec(&local_98,&local_260);
              pppppplVar55 = (long ******)(puVar51 + 0x10);
              local_188 = 0;
              uStack_170 = 0x10;
              local_190 = (undefined8 *******)pppppplVar55;
              local_178 = &local_188;
              FUN_0018b070(&local_190,&DAT_0410a6cf,0xffffffffffffffff);
              if (local_e8 != (long *******)0x0) {
                ppppppplVar56 = local_e8;
                ppppppplVar50 = (long *******)&local_e8;
                do {
                  ppppppplVar42 = ppppppplVar50;
                  ppppppplVar35 = ppppppplVar56;
                  uVar25 = FUN_0018b4e0(ppppppplVar35 + 4,&local_190);
                  ppppppplVar50 = ppppppplVar42;
                  ppppppplVar54 = ppppppplVar35 + 1;
                  if ((uVar25 & 1) == 0) {
                    ppppppplVar50 = ppppppplVar35;
                    ppppppplVar54 = ppppppplVar35;
                  }
                  ppppppplVar56 = (long *******)*ppppppplVar54;
                } while ((long *******)*ppppppplVar54 != (long *******)0x0);
                if ((long ********)ppppppplVar50 != &local_e8) {
                  ppppppplVar56 = ppppppplVar42;
                  ppppppplVar54 = ppppppplVar42 + 4;
                  if ((uVar25 & 1) == 0) {
                    ppppppplVar56 = ppppppplVar35;
                    ppppppplVar54 = ppppppplVar35 + 4;
                  }
                  uVar28 = FUN_0018b4e0(&local_190,ppppppplVar54);
                  puVar57 = PTR_DAT_04bc0ec8;
                  if ((uVar28 & 1) == 0) {
                    ppppppplVar36 = ppppppplVar42 + 1;
                    if ((uVar25 & 1) == 0) {
                      ppppppplVar36 = ppppppplVar35 + 1;
                    }
                    ppppppplVar15 = (long *******)*ppppppplVar36;
                    ppppppplVar37 = ppppppplVar50;
                    if ((long *******)*ppppppplVar36 == (long *******)0x0) {
                      do {
                        ppppppplVar36 = (long *******)ppppppplVar37[2];
                        bVar16 = (long *******)*ppppppplVar36 != ppppppplVar37;
                        ppppppplVar37 = ppppppplVar36;
                      } while (bVar16);
                    }
                    else {
                      do {
                        ppppppplVar36 = ppppppplVar15;
                        ppppppplVar15 = (long *******)*ppppppplVar36;
                      } while ((long *******)*ppppppplVar36 != (long *******)0x0);
                    }
                    if (local_f0 == ppppppplVar50) {
                      local_f0 = ppppppplVar36;
                    }
                    local_e0 = local_e0 + -1;
                    FUN_00192390(local_e8,ppppppplVar50);
                    if ((uVar25 & 1) == 0) {
                      ppppppplVar42 = ppppppplVar35;
                    }
                    ppppppplVar42[9] = (long ******)(puVar57 + 0x10);
                    FUN_0018b1a0(ppppppplVar42 + 9);
                    ppppppplVar56[4] = (long ******)(puVar57 + 0x10);
                    FUN_0018b1a0(ppppppplVar54);
                    FUN_00187e4c(ppppppplVar50);
                  }
                }
              }
              local_190 = (undefined8 *******)pppppplVar55;
              FUN_0018b1a0(&local_190);
              local_188 = 0;
              uStack_170 = 0x10;
              local_190 = (undefined8 *******)pppppplVar55;
              local_178 = &local_188;
              FUN_0018b070(&local_190,&DAT_0410a6cf,0xffffffffffffffff);
              puVar57 = PTR_DAT_04bc0ec8;
              ppppppplVar50 = (long *******)&local_e8;
              ppppppplVar56 = (long *******)&local_e8;
              if (local_e8 != (long *******)0x0) {
                ppppppplVar54 = local_e8;
                do {
                  while( true ) {
                    ppppppplVar56 = ppppppplVar54;
                    uVar25 = FUN_0018b4e0(&local_190,ppppppplVar56 + 4);
                    if ((uVar25 & 1) != 0) break;
                    uVar25 = FUN_0018b4e0(ppppppplVar56 + 4,&local_190);
                    if ((uVar25 & 1) == 0) {
                      ppppppplVar54 = (long *******)*ppppppplVar50;
                      if (ppppppplVar54 != (long *******)0x0) goto LAB_001b1c64;
                      goto LAB_001b1a90;
                    }
                    ppppppplVar50 = ppppppplVar56 + 1;
                    ppppppplVar54 = (long *******)*ppppppplVar50;
                    if ((long *******)*ppppppplVar50 == (long *******)0x0) goto LAB_001b1a90;
                  }
                  ppppppplVar54 = (long *******)*ppppppplVar56;
                  ppppppplVar50 = ppppppplVar56;
                } while ((long *******)*ppppppplVar56 != (long *******)0x0);
              }
LAB_001b1a90:
              ppppppplVar54 = (long *******)FUN_00187df4(0x70);
              pppppplVar55 = (long ******)(puVar57 + 0x10);
              ppppppplVar42 = ppppppplVar54 + 4;
              *ppppppplVar42 = pppppplVar55;
              *(undefined1 *)(ppppppplVar54 + 5) = 0;
              ppppppplVar54[7] = (long ******)(ppppppplVar54 + 5);
              ppppppplVar54[8] = (long ******)0x10;
              if (&local_190 != (undefined8 ********)ppppppplVar42) {
                FUN_01c672e0(ppppppplVar42,&local_190);
              }
              ppppppplVar54[9] = pppppplVar55;
              *(undefined1 *)(ppppppplVar54 + 10) = 0;
              ppppppplVar54[0xc] = (long ******)(ppppppplVar54 + 10);
              ppppppplVar54[0xd] = (long ******)0x10;
              ppppppplVar54[2] = (long ******)ppppppplVar56;
              *ppppppplVar54 = (long ******)0x0;
              ppppppplVar54[1] = (long ******)0x0;
              *ppppppplVar50 = (long ******)ppppppplVar54;
              ppppppplVar56 = ppppppplVar54;
              if ((long *******)*local_f0 != (long *******)0x0) {
                ppppppplVar56 = (long *******)*ppppppplVar50;
                local_f0 = (long *******)*local_f0;
              }
              bVar16 = ppppppplVar56 == local_e8;
              *(bool *)(ppppppplVar56 + 3) = bVar16;
joined_r0x001b1b1c:
              if ((bVar16) || (pppppplVar55 = ppppppplVar56[2], *(char *)(pppppplVar55 + 3) != '\0')
                 ) goto LAB_001b1c58;
              ppppppplVar50 = (long *******)pppppplVar55[2];
              pppppplVar40 = *ppppppplVar50;
              if (pppppplVar40 != pppppplVar55) {
                if ((pppppplVar40 == (long ******)0x0) ||
                   (pppppplVar40 = pppppplVar40 + 3, *(char *)pppppplVar40 != '\0')) {
                  if ((long *******)*pppppplVar55 == ppppppplVar56) {
                    pppppplVar40 = ppppppplVar56[1];
                    *pppppplVar55 = (long *****)pppppplVar40;
                    if (pppppplVar40 != (long ******)0x0) {
                      pppppplVar40[2] = (long *****)pppppplVar55;
                      ppppppplVar50 = (long *******)pppppplVar55[2];
                    }
                    ppppppplVar56[2] = (long ******)ppppppplVar50;
                    pppppplVar55[2][(long ******)*pppppplVar55[2] != pppppplVar55] =
                         (long ****)ppppppplVar56;
                    ppppppplVar56[1] = pppppplVar55;
                    pppppplVar55[2] = (long *****)ppppppplVar56;
                    ppppppplVar50 = (long *******)ppppppplVar56[2];
                    *(undefined1 *)(ppppppplVar56 + 3) = 1;
                    pppppplVar55 = ppppppplVar50[1];
                    *(undefined1 *)(ppppppplVar50 + 3) = 0;
                    pppppplVar40 = (long ******)*pppppplVar55;
                    ppppppplVar50[1] = pppppplVar40;
                  }
                  else {
                    *(undefined1 *)(pppppplVar55 + 3) = 1;
                    pppppplVar55 = ppppppplVar50[1];
                    *(undefined1 *)(ppppppplVar50 + 3) = 0;
                    pppppplVar40 = (long ******)*pppppplVar55;
                    ppppppplVar50[1] = pppppplVar40;
                  }
                  if (pppppplVar40 != (long ******)0x0) {
                    pppppplVar40[2] = (long *****)ppppppplVar50;
                  }
                  pppppplVar55[2] = (long *****)ppppppplVar50[2];
                  ppppppplVar50[2][(long *******)*ppppppplVar50[2] != ppppppplVar50] =
                       (long *****)pppppplVar55;
                  *pppppplVar55 = (long *****)ppppppplVar50;
                  goto LAB_001b1c54;
                }
LAB_001b1b24:
                bVar16 = ppppppplVar50 == local_e8;
                *(undefined1 *)(pppppplVar55 + 3) = 1;
                *(bool *)(ppppppplVar50 + 3) = bVar16;
                *(char *)pppppplVar40 = '\x01';
                ppppppplVar56 = ppppppplVar50;
                goto joined_r0x001b1b1c;
              }
              if ((ppppppplVar50[1] != (long ******)0x0) &&
                 (pppppplVar40 = ppppppplVar50[1] + 3, *(char *)pppppplVar40 == '\0'))
              goto LAB_001b1b24;
              if ((long *******)*pppppplVar55 == ppppppplVar56) {
                *(undefined1 *)(pppppplVar55 + 3) = 1;
                *(undefined1 *)(ppppppplVar50 + 3) = 0;
                pppppplVar40 = (long ******)pppppplVar55[1];
                *ppppppplVar50 = pppppplVar40;
              }
              else {
                ppppplVar38 = pppppplVar55[1];
                ppppplVar39 = (long *****)*ppppplVar38;
                pppppplVar55[1] = ppppplVar39;
                if (ppppplVar39 != (long *****)0x0) {
                  ppppplVar39[2] = (long ****)pppppplVar55;
                  ppppppplVar50 = (long *******)pppppplVar55[2];
                }
                ppppplVar38[2] = (long ****)ppppppplVar50;
                pppppplVar55[2][(long ******)*pppppplVar55[2] != pppppplVar55] =
                     (long ****)ppppplVar38;
                *ppppplVar38 = (long ****)pppppplVar55;
                pppppplVar55[2] = ppppplVar38;
                ppppppplVar50 = (long *******)ppppplVar38[2];
                pppppplVar55 = *ppppppplVar50;
                *(undefined1 *)(ppppplVar38 + 3) = 1;
                *(undefined1 *)(ppppppplVar50 + 3) = 0;
                pppppplVar40 = (long ******)pppppplVar55[1];
                *ppppppplVar50 = pppppplVar40;
              }
              if (pppppplVar40 != (long ******)0x0) {
                pppppplVar40[2] = (long *****)ppppppplVar50;
              }
              pppppplVar55[2] = (long *****)ppppppplVar50[2];
              ppppppplVar50[2][(long *******)*ppppppplVar50[2] != ppppppplVar50] =
                   (long *****)pppppplVar55;
              pppppplVar55[1] = (long *****)ppppppplVar50;
LAB_001b1c54:
              ppppppplVar50[2] = pppppplVar55;
LAB_001b1c58:
              local_e0 = local_e0 + 1;
LAB_001b1c64:
              FUN_00189504(ppppppplVar54 + 9,&local_98);
              pppppplVar55 = (long ******)(puVar57 + 0x10);
              local_190 = (undefined8 *******)pppppplVar55;
              FUN_0018b1a0(&local_190);
              local_98 = (long *******)pppppplVar55;
              FUN_0018b1a0(&local_98);
              uVar25 = FUN_001e14f8(&local_260);
              if (local_b8 == '\0') {
                FUN_001b8590(&local_120);
              }
              local_188 = 0;
              uStack_170 = 0x10;
              local_190 = (undefined8 *******)pppppplVar55;
              local_178 = &local_188;
              FUN_0018b070(&local_190,&DAT_0410a6d2,0xffffffffffffffff);
              if (local_e8 != (long *******)0x0) {
                ppppppplVar56 = local_e8;
                ppppppplVar50 = (long *******)&local_e8;
                do {
                  ppppppplVar42 = ppppppplVar50;
                  ppppppplVar35 = ppppppplVar56;
                  uVar28 = FUN_0018b4e0(ppppppplVar35 + 4,&local_190);
                  ppppppplVar50 = ppppppplVar42;
                  ppppppplVar54 = ppppppplVar35 + 1;
                  if ((uVar28 & 1) == 0) {
                    ppppppplVar50 = ppppppplVar35;
                    ppppppplVar54 = ppppppplVar35;
                  }
                  ppppppplVar56 = (long *******)*ppppppplVar54;
                } while ((long *******)*ppppppplVar54 != (long *******)0x0);
                if ((long ********)ppppppplVar50 != &local_e8) {
                  ppppppplVar56 = ppppppplVar42;
                  ppppppplVar54 = ppppppplVar42 + 4;
                  if ((uVar28 & 1) == 0) {
                    ppppppplVar56 = ppppppplVar35;
                    ppppppplVar54 = ppppppplVar35 + 4;
                  }
                  uVar29 = FUN_0018b4e0(&local_190,ppppppplVar54);
                  puVar57 = PTR_DAT_04bc0ec8;
                  if ((uVar29 & 1) == 0) {
                    ppppppplVar36 = ppppppplVar42 + 1;
                    if ((uVar28 & 1) == 0) {
                      ppppppplVar36 = ppppppplVar35 + 1;
                    }
                    ppppppplVar15 = (long *******)*ppppppplVar36;
                    ppppppplVar37 = ppppppplVar50;
                    if ((long *******)*ppppppplVar36 == (long *******)0x0) {
                      do {
                        ppppppplVar36 = (long *******)ppppppplVar37[2];
                        bVar16 = (long *******)*ppppppplVar36 != ppppppplVar37;
                        ppppppplVar37 = ppppppplVar36;
                      } while (bVar16);
                    }
                    else {
                      do {
                        ppppppplVar36 = ppppppplVar15;
                        ppppppplVar15 = (long *******)*ppppppplVar36;
                      } while ((long *******)*ppppppplVar36 != (long *******)0x0);
                    }
                    if (local_f0 == ppppppplVar50) {
                      local_f0 = ppppppplVar36;
                    }
                    local_e0 = local_e0 + -1;
                    FUN_00192390(local_e8,ppppppplVar50);
                    if ((uVar28 & 1) == 0) {
                      ppppppplVar42 = ppppppplVar35;
                    }
                    ppppppplVar42[9] = (long ******)(puVar57 + 0x10);
                    FUN_0018b1a0(ppppppplVar42 + 9);
                    ppppppplVar56[4] = (long ******)(puVar57 + 0x10);
                    FUN_0018b1a0(ppppppplVar54);
                    FUN_00187e4c(ppppppplVar50);
                  }
                }
              }
              puVar51 = PTR_DAT_04bc0ec8;
              pppppplVar55 = (long ******)(PTR_DAT_04bc0ec8 + 0x10);
              local_190 = (undefined8 *******)pppppplVar55;
              FUN_0018b1a0(&local_190);
              local_188 = 0;
              uStack_170 = 0x10;
              local_190 = (undefined8 *******)pppppplVar55;
              local_178 = &local_188;
              FUN_0018b070(&local_190,&DAT_0410a6d2,0xffffffffffffffff);
              puVar58 = (undefined8 *)PTR_DAT_04bcb910;
              ppppppplVar50 = (long *******)&local_100;
              ppppppplVar56 = (long *******)&local_100;
              if (local_100 != (long *******)0x0) {
                ppppppplVar54 = local_100;
                do {
                  while( true ) {
                    ppppppplVar56 = ppppppplVar54;
                    uVar28 = FUN_0018b4e0(&local_190,ppppppplVar56 + 4);
                    if ((uVar28 & 1) != 0) break;
                    uVar28 = FUN_0018b4e0(ppppppplVar56 + 4,&local_190);
                    if ((uVar28 & 1) == 0) {
                      ppppppplVar54 = (long *******)*ppppppplVar50;
                      if (ppppppplVar54 != (long *******)0x0) goto LAB_001b2064;
                      goto LAB_001b1ea0;
                    }
                    ppppppplVar50 = ppppppplVar56 + 1;
                    ppppppplVar54 = (long *******)*ppppppplVar50;
                    if ((long *******)*ppppppplVar50 == (long *******)0x0) goto LAB_001b1ea0;
                  }
                  ppppppplVar54 = (long *******)*ppppppplVar56;
                  ppppppplVar50 = ppppppplVar56;
                } while ((long *******)*ppppppplVar56 != (long *******)0x0);
              }
LAB_001b1ea0:
              ppppppplVar54 = (long *******)FUN_00187df4(0x50);
              ppppppplVar42 = ppppppplVar54 + 4;
              *ppppppplVar42 = pppppplVar55;
              *(undefined1 *)(ppppppplVar54 + 5) = 0;
              ppppppplVar54[7] = (long ******)(ppppppplVar54 + 5);
              ppppppplVar54[8] = (long ******)0x10;
              if (&local_190 != (undefined8 ********)ppppppplVar42) {
                FUN_01c672e0(ppppppplVar42,&local_190);
              }
              ppppppplVar54[9] = (long ******)0x0;
              *ppppppplVar54 = (long ******)0x0;
              ppppppplVar54[1] = (long ******)0x0;
              ppppppplVar54[2] = (long ******)ppppppplVar56;
              *ppppppplVar50 = (long ******)ppppppplVar54;
              ppppppplVar56 = ppppppplVar54;
              if ((long *)*local_108 != (long *)0x0) {
                ppppppplVar56 = (long *******)*ppppppplVar50;
                local_108 = (long *)*local_108;
              }
              bVar16 = ppppppplVar56 == local_100;
              *(bool *)(ppppppplVar56 + 3) = bVar16;
joined_r0x001b1f14:
              if ((bVar16) || (pppppplVar55 = ppppppplVar56[2], *(char *)(pppppplVar55 + 3) != '\0')
                 ) goto LAB_001b2058;
              ppppppplVar50 = (long *******)pppppplVar55[2];
              pppppplVar40 = *ppppppplVar50;
              if (pppppplVar40 != pppppplVar55) {
                if ((pppppplVar40 == (long ******)0x0) ||
                   (pppppplVar40 = pppppplVar40 + 3, *(char *)pppppplVar40 != '\0')) {
                  if ((long *******)*pppppplVar55 == ppppppplVar56) {
                    pppppplVar40 = ppppppplVar56[1];
                    *pppppplVar55 = (long *****)pppppplVar40;
                    if (pppppplVar40 != (long ******)0x0) {
                      pppppplVar40[2] = (long *****)pppppplVar55;
                      ppppppplVar50 = (long *******)pppppplVar55[2];
                    }
                    ppppppplVar56[2] = (long ******)ppppppplVar50;
                    pppppplVar55[2][(long ******)*pppppplVar55[2] != pppppplVar55] =
                         (long ****)ppppppplVar56;
                    ppppppplVar56[1] = pppppplVar55;
                    pppppplVar55[2] = (long *****)ppppppplVar56;
                    ppppppplVar50 = (long *******)ppppppplVar56[2];
                    *(undefined1 *)(ppppppplVar56 + 3) = 1;
                    pppppplVar55 = ppppppplVar50[1];
                    *(undefined1 *)(ppppppplVar50 + 3) = 0;
                    pppppplVar40 = (long ******)*pppppplVar55;
                    ppppppplVar50[1] = pppppplVar40;
                  }
                  else {
                    *(undefined1 *)(pppppplVar55 + 3) = 1;
                    pppppplVar55 = ppppppplVar50[1];
                    *(undefined1 *)(ppppppplVar50 + 3) = 0;
                    pppppplVar40 = (long ******)*pppppplVar55;
                    ppppppplVar50[1] = pppppplVar40;
                  }
                  if (pppppplVar40 != (long ******)0x0) {
                    pppppplVar40[2] = (long *****)ppppppplVar50;
                  }
                  pppppplVar55[2] = (long *****)ppppppplVar50[2];
                  ppppppplVar50[2][(long *******)*ppppppplVar50[2] != ppppppplVar50] =
                       (long *****)pppppplVar55;
                  *pppppplVar55 = (long *****)ppppppplVar50;
                  goto LAB_001b2054;
                }
LAB_001b1f20:
                bVar16 = ppppppplVar50 == local_100;
                *(undefined1 *)(pppppplVar55 + 3) = 1;
                *(bool *)(ppppppplVar50 + 3) = bVar16;
                *(char *)pppppplVar40 = '\x01';
                ppppppplVar56 = ppppppplVar50;
                goto joined_r0x001b1f14;
              }
              if ((ppppppplVar50[1] != (long ******)0x0) &&
                 (pppppplVar40 = ppppppplVar50[1] + 3, *(char *)pppppplVar40 == '\0'))
              goto LAB_001b1f20;
              if ((long *******)*pppppplVar55 == ppppppplVar56) {
                *(undefined1 *)(pppppplVar55 + 3) = 1;
                *(undefined1 *)(ppppppplVar50 + 3) = 0;
                pppppplVar40 = (long ******)pppppplVar55[1];
                *ppppppplVar50 = pppppplVar40;
              }
              else {
                ppppplVar38 = pppppplVar55[1];
                ppppplVar39 = (long *****)*ppppplVar38;
                pppppplVar55[1] = ppppplVar39;
                if (ppppplVar39 != (long *****)0x0) {
                  ppppplVar39[2] = (long ****)pppppplVar55;
                  ppppppplVar50 = (long *******)pppppplVar55[2];
                }
                ppppplVar38[2] = (long ****)ppppppplVar50;
                pppppplVar55[2][(long ******)*pppppplVar55[2] != pppppplVar55] =
                     (long ****)ppppplVar38;
                *ppppplVar38 = (long ****)pppppplVar55;
                pppppplVar55[2] = ppppplVar38;
                ppppppplVar50 = (long *******)ppppplVar38[2];
                pppppplVar55 = *ppppppplVar50;
                *(undefined1 *)(ppppplVar38 + 3) = 1;
                *(undefined1 *)(ppppppplVar50 + 3) = 0;
                pppppplVar40 = (long ******)pppppplVar55[1];
                *ppppppplVar50 = pppppplVar40;
              }
              if (pppppplVar40 != (long ******)0x0) {
                pppppplVar40[2] = (long *****)ppppppplVar50;
              }
              pppppplVar55[2] = (long *****)ppppppplVar50[2];
              ppppppplVar50[2][(long *******)*ppppppplVar50[2] != ppppppplVar50] =
                   (long *****)pppppplVar55;
              pppppplVar55[1] = (long *****)ppppppplVar50;
LAB_001b2054:
              ppppppplVar50[2] = pppppplVar55;
LAB_001b2058:
              local_f8 = local_f8 + 1;
LAB_001b2064:
              ppppppplVar54[9] = (long ******)(uVar25 & 0xffff);
              local_190 = (undefined8 *******)(puVar51 + 0x10);
              FUN_0018b1a0(&local_190);
              local_b7 = 0;
              local_98 = (long *******)CONCAT44(local_98._4_4_,0x10001);
              FUN_0018aa70(&local_190,&local_98);
              FUN_001e1868(&local_260);
              puVar57 = PTR_DAT_04bcb900;
            }
            local_88 = 0;
            local_98 = (long *******)&local_98;
            local_90 = (long *******)&local_98;
            pppppplVar55 = (long ******)FUN_00187df4(0x80);
            *pppppplVar55 = (long *****)0x0;
            FUN_001b8358(pppppplVar55 + 2,lVar32);
            *pppppplVar55 = (long *****)local_98;
            pppppplVar55[1] = (long *****)&local_98;
            local_98[1] = pppppplVar55;
            local_88 = local_88 + 1;
            local_98 = (long *******)pppppplVar55;
            if (*(char *)(ppppppplVar46 + 0xf) == '\0') {
              FUN_001b8590(ppppppplVar41);
            }
            local_260 = (undefined8 *******)(puVar51 + 0x10);
            local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
            local_240 = (long ******)&DAT_00000010;
            local_248 = (long ******)&local_258;
            FUN_0018b070(&local_260,&DAT_0410a6b7,0xffffffffffffffff);
            ppppppplVar56 = ppppppplVar46 + 6;
            ppppppplVar50 = (long *******)*ppppppplVar56;
            if (ppppppplVar50 == (long *******)0x0) {
LAB_001b217c:
              ppppppplVar50 = ppppppplVar46 + 9;
              ppppppplVar54 = (long *******)*ppppppplVar50;
              if (ppppppplVar54 != (long *******)0x0) {
                ppppppplVar42 = ppppppplVar50;
                do {
                  uVar25 = FUN_0018b4e0(ppppppplVar54 + 4,&local_260);
                  ppppppplVar35 = ppppppplVar54 + 1;
                  if ((uVar25 & 1) == 0) {
                    ppppppplVar42 = ppppppplVar54;
                    ppppppplVar35 = ppppppplVar54;
                  }
                  ppppppplVar54 = (long *******)*ppppppplVar35;
                } while (ppppppplVar54 != (long *******)0x0);
                if (ppppppplVar42 != ppppppplVar50) {
                  uVar25 = FUN_0018b4e0(&local_260,ppppppplVar42 + 4);
                  puVar51 = PTR_DAT_04bc0ec8;
                  if ((uVar25 & 1) == 0) {
                    uVar53 = strtoull((char *)ppppppplVar42[0xc],(char **)0x0,10);
                    FUN_001b8e80(&local_190,ppppppplVar41,&DAT_0410a6b7,uVar53);
                    local_260 = (undefined8 *******)(puVar51 + 0x10);
                    FUN_0018b1a0(&local_260);
                    uVar21 = (uint)uVar53;
                    goto joined_r0x001b226c;
                  }
                  local_260 = (undefined8 *******)(PTR_DAT_04bc0ec8 + 0x10);
                  FUN_0018b1a0(&local_260);
                  goto LAB_001b23dc;
                }
              }
              puVar51 = PTR_DAT_04bc0ec8;
              local_260 = (undefined8 *******)(PTR_DAT_04bc0ec8 + 0x10);
              FUN_0018b1a0(&local_260);
LAB_001b23dc:
              if (*(char *)(lVar33 + 0x78) == '\0') {
                FUN_001b8590(lVar32);
              }
              local_260 = (undefined8 *******)(puVar51 + 0x10);
              local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
              local_240 = (long ******)0x10;
              local_248 = (long ******)&local_258;
              FUN_0018b070(&local_260,&DAT_0410a6d5,0xffffffffffffffff);
              plVar47 = (long *)*plVar49;
              if (plVar47 == (long *)0x0) {
LAB_001b246c:
                plVar47 = (long *)*plVar52;
                if (plVar47 != (long *)0x0) {
                  plVar43 = plVar52;
                  do {
                    uVar25 = FUN_0018b4e0(plVar47 + 4,&local_260);
                    plVar13 = plVar47 + 1;
                    if ((uVar25 & 1) == 0) {
                      plVar43 = plVar47;
                      plVar13 = plVar47;
                    }
                    plVar47 = (long *)*plVar13;
                  } while (plVar47 != (long *)0x0);
                  if ((plVar43 != plVar52) &&
                     (uVar25 = FUN_0018b4e0(&local_260,plVar43 + 4), (uVar25 & 1) == 0)) {
                    uVar53 = strtoull((char *)plVar43[0xc],(char **)0x0,10);
                    FUN_001b8e80(&local_190,lVar32,&DAT_0410a6d5,uVar53);
                    local_260 = (undefined8 *******)(puVar51 + 0x10);
                    FUN_0018b1a0(&local_260);
                    goto joined_r0x001b271c;
                  }
                }
                local_260 = (undefined8 *******)(puVar51 + 0x10);
                FUN_0018b1a0(&local_260);
LAB_001b24cc:
                if (*(char *)(ppppppplVar46 + 0xf) == '\0') {
                  FUN_001b8590(ppppppplVar41);
                }
                local_260 = (undefined8 *******)(puVar51 + 0x10);
                local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
                local_240 = (long ******)&DAT_00000010;
                local_248 = (long ******)&local_258;
                FUN_0018b070(&local_260,&DAT_0410a6b7,0xffffffffffffffff);
                ppppppplVar50 = (long *******)*ppppppplVar56;
                if (ppppppplVar50 == (long *******)0x0) {
LAB_001b255c:
                  ppppppplVar50 = ppppppplVar46 + 9;
                  ppppppplVar56 = (long *******)*ppppppplVar50;
                  if (ppppppplVar56 != (long *******)0x0) {
                    ppppppplVar54 = ppppppplVar50;
                    do {
                      uVar25 = FUN_0018b4e0(ppppppplVar56 + 4,&local_260);
                      ppppppplVar42 = ppppppplVar56 + 1;
                      if ((uVar25 & 1) == 0) {
                        ppppppplVar54 = ppppppplVar56;
                        ppppppplVar42 = ppppppplVar56;
                      }
                      ppppppplVar56 = (long *******)*ppppppplVar42;
                    } while (ppppppplVar56 != (long *******)0x0);
                    if (ppppppplVar54 != ppppppplVar50) {
                      uVar25 = FUN_0018b4e0(&local_260,ppppppplVar54 + 4);
                      puVar51 = PTR_DAT_04bc0ec8;
                      if ((uVar25 & 1) == 0) {
                        uVar53 = strtoull((char *)ppppppplVar54[0xc],(char **)0x0,10);
                        FUN_001b8e80(&local_190,ppppppplVar41,&DAT_0410a6b7,uVar53);
                        local_260 = (undefined8 *******)(puVar51 + 0x10);
                        FUN_0018b1a0(&local_260);
                        if (((uint)uVar53 >> 1 & 1) != 0) goto LAB_001b2690;
                      }
                      else {
                        local_260 = (undefined8 *******)(PTR_DAT_04bc0ec8 + 0x10);
                        FUN_0018b1a0(&local_260);
                      }
                      goto LAB_001b25f0;
                    }
                  }
                  puVar51 = PTR_DAT_04bc0ec8;
                  local_260 = (undefined8 *******)(PTR_DAT_04bc0ec8 + 0x10);
                  FUN_0018b1a0(&local_260);
                }
                else {
                  ppppppplVar54 = ppppppplVar56;
                  do {
                    uVar25 = FUN_0018b4e0(ppppppplVar50 + 4,&local_260);
                    ppppppplVar42 = ppppppplVar50 + 1;
                    if ((uVar25 & 1) == 0) {
                      ppppppplVar54 = ppppppplVar50;
                      ppppppplVar42 = ppppppplVar50;
                    }
                    ppppppplVar50 = (long *******)*ppppppplVar42;
                  } while (ppppppplVar50 != (long *******)0x0);
                  if ((ppppppplVar54 == ppppppplVar56) ||
                     (uVar25 = FUN_0018b4e0(&local_260,ppppppplVar54 + 4), (uVar25 & 1) != 0))
                  goto LAB_001b255c;
                  pppppplVar55 = ppppppplVar54[9];
                  local_260 = (undefined8 *******)(puVar51 + 0x10);
                  FUN_0018b1a0(&local_260);
                  if (((uint)pppppplVar55 >> 1 & 1) != 0) {
LAB_001b2690:
                    plVar47 = (long *)(puVar57 + 0x18);
                    if (*pcVar59 != '\0') {
                      puVar24 = (uint *)FUN_03876070(*puVar58);
                      uVar21 = *puVar24;
                      if (uVar21 != 0) {
                        lVar34 = **(long **)(puVar57 + 0xa0);
                        if ((ulong)((*(long **)(puVar57 + 0xa0))[1] - lVar34 >> 3) <= (ulong)uVar21)
                        {
                    /* WARNING: Subroutine does not return */
                          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                                       ,0x47,0xe0000003,0);
                        }
                        plVar47 = (long *)(*(long *)(lVar34 + (ulong)uVar21 * 8) + 0x10);
                      }
                    }
                    if ((*plVar47 == 0) || (lVar34 = *(long *)(*plVar47 + 0x10), lVar34 == 0)) {
                      lVar34 = 0;
                    }
                    else {
                      lVar34 = *(long *)(lVar34 + 0xe8);
                    }
                    local_250 = 0;
                    local_260 = (undefined8 *******)(PTR_DAT_04bcc2d8 + 0x10);
                    uStack_238 = 0x10;
                    local_258 = (long ******)(puVar51 + 0x10);
                    local_240 = (long ******)&local_250;
                    FUN_0018b070(&local_258,*(undefined8 *)(lVar34 + 0x168),0xffffffffffffffff);
                    local_230 = *(undefined2 *)(lVar34 + 0x178);
                    local_220[0] = 0;
                    uStack_208 = 0x10;
                    local_228 = (long ******)(puVar51 + 0x10);
                    local_210 = local_220;
                    FUN_0018b070(&local_228,*(undefined8 *)(lVar34 + 0x198),0xffffffffffffffff);
                    local_200 = (undefined2)*(undefined8 *)(lVar34 + 0x1a8);
                    local_1f8 = (char)*(undefined8 *)(lVar34 + 0x1b0);
                    local_1f7 = (undefined1)((ulong)*(undefined8 *)(lVar34 + 0x1b0) >> 8);
                    if (local_b8 == '\0') {
                      FUN_001b8590(&local_120);
                    }
                    FUN_001e17d0(local_118,local_200);
                    local_b7 = 0;
                    FUN_001abf78(&local_260);
                    goto LAB_001b2948;
                  }
                }
LAB_001b25f0:
                uVar19 = DAT_04c5e508;
                if (*pcVar59 != '\0') {
                  puVar24 = (uint *)FUN_03876070(*puVar58);
                  uVar19 = DAT_04c5e508;
                  if (*puVar24 != 0) {
                    uVar19 = *(undefined2 *)(DAT_04c5e500 + (ulong)*puVar24 * 2);
                  }
                }
                if (local_b8 == '\0') {
                  FUN_001b8590(&local_120);
                }
                FUN_001e17d0(local_118,uVar19);
                local_b7 = 0;
              }
              else {
                plVar43 = plVar49;
                do {
                  uVar25 = FUN_0018b4e0(plVar47 + 4,&local_260);
                  plVar13 = plVar47 + 1;
                  if ((uVar25 & 1) == 0) {
                    plVar43 = plVar47;
                    plVar13 = plVar47;
                  }
                  plVar47 = (long *)*plVar13;
                } while (plVar47 != (long *)0x0);
                if ((plVar43 == plVar49) ||
                   (uVar25 = FUN_0018b4e0(&local_260,plVar43 + 4), (uVar25 & 1) != 0))
                goto LAB_001b246c;
                uVar53 = plVar43[9];
                local_260 = (undefined8 *******)(puVar51 + 0x10);
                FUN_0018b1a0(&local_260);
joined_r0x001b271c:
                if ((uVar53 == 0) ||
                   (uVar21 = FUN_001b8fa0(ppppppplVar41,&DAT_0410a6b7,0), (uVar21 >> 1 & 1) == 0))
                goto LAB_001b24cc;
                FUN_001af970(&local_190,lVar32);
                pppppppuVar27 = (undefined8 *******)(puVar51 + 0x10);
                local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
                local_240 = (long ******)0x10;
                local_260 = pppppppuVar27;
                local_248 = (long ******)&local_258;
                FUN_0018b070(&local_260,&DAT_0410a6bc,0xffffffffffffffff);
                FUN_001dd950(&local_f0,&local_260);
                local_260 = pppppppuVar27;
                FUN_0018b1a0(&local_260);
                local_258 = (long ******)((ulong)local_258 & 0xffffffffffffff00);
                local_240 = (long ******)&DAT_00000010;
                local_260 = pppppppuVar27;
                local_248 = (long ******)&local_258;
                FUN_0018b070(&local_260,&DAT_0410a6bc,0xffffffffffffffff);
                puVar51 = PTR_DAT_04bc0ec8;
                local_1b8 = &local_260;
                lVar34 = FUN_001dda60(&local_f0,&local_260,PTR_piecewise_construct_04bcbf80,
                                      &local_1b8,&local_b0);
                FUN_00189504(lVar34 + 0x48,&local_190);
                local_260 = pppppppuVar27;
                FUN_0018b1a0(&local_260);
                local_190 = pppppppuVar27;
                FUN_0018b1a0(&local_190);
                uVar19 = FUN_001b8fa0(lVar32,&DAT_0410a6cb,0);
                FUN_001b8e80(&local_260,&local_120,&DAT_0410a6cb,uVar19);
                FUN_001b8e80(&local_260,&local_120,&DAT_0410a6d5,1);
              }
LAB_001b2948:
              (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
                        (*(long **)(param_1 + 0x10),&local_98,&local_120);
              if (lVar26 != 0) {
                uVar21 = FUN_001b8fa0(ppppppplVar41,&DAT_0410a6b7,0);
                if ((uVar21 >> 1 & 1) == 0) {
                  FUN_001b8014(&local_260);
                  FUN_001b3440(&local_190,lVar32);
                  puVar14 = local_178;
                  if (local_1f8 == '\0') {
                    FUN_001b8590(&local_260);
                  }
                  local_1f7 = 0;
                  FUN_001e1640(local_258,puVar14);
                  local_190 = (undefined8 *******)(puVar51 + 0x10);
                  FUN_0018b1a0(&local_190);
                  uVar23 = FUN_001b8fa0(lVar32,"Ntrpp",0);
                  if (local_1f8 == '\0') {
                    FUN_001b8590(&local_260);
                  }
                  FUN_001e17d0(local_258,uVar23);
                  local_1f7 = 0;
                  uVar23 = FUN_001b8fa0(lVar32,"RVCID",0);
                  FUN_001b8e80(&local_190,&local_260,"RVCID",uVar23);
                  FUN_001acc20(param_1,&local_260);
                  FUN_001b8504(&local_260);
                }
                else {
                  FUN_001acc20(param_1,lVar32);
                }
              }
            }
            else {
              ppppppplVar54 = ppppppplVar56;
              do {
                uVar25 = FUN_0018b4e0(ppppppplVar50 + 4,&local_260);
                ppppppplVar42 = ppppppplVar50 + 1;
                if ((uVar25 & 1) == 0) {
                  ppppppplVar54 = ppppppplVar50;
                  ppppppplVar42 = ppppppplVar50;
                }
                ppppppplVar50 = (long *******)*ppppppplVar42;
              } while (ppppppplVar50 != (long *******)0x0);
              if ((ppppppplVar54 == ppppppplVar56) ||
                 (uVar25 = FUN_0018b4e0(&local_260,ppppppplVar54 + 4), (uVar25 & 1) != 0))
              goto LAB_001b217c;
              pppppplVar55 = ppppppplVar54[9];
              local_260 = (undefined8 *******)(puVar51 + 0x10);
              FUN_0018b1a0(&local_260);
              uVar21 = (uint)pppppplVar55;
joined_r0x001b226c:
              if ((uVar21 >> 1 & 1) == 0) goto LAB_001b23dc;
              plVar47 = (long *)(puVar57 + 0x18);
              if (*pcVar59 != '\0') {
                puVar24 = (uint *)FUN_03876070(*puVar58);
                uVar21 = *puVar24;
                if (uVar21 != 0) {
                  lVar34 = **(long **)(puVar57 + 0xa0);
                  if ((ulong)((*(long **)(puVar57 + 0xa0))[1] - lVar34 >> 3) <= (ulong)uVar21) {
                    /* WARNING: Subroutine does not return */
                    FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                                 ,0x47,0xe0000003,0);
                  }
                  plVar47 = (long *)(*(long *)(lVar34 + (ulong)uVar21 * 8) + 0x10);
                }
              }
              if ((*plVar47 == 0) || (lVar34 = *(long *)(*plVar47 + 0x10), lVar34 == 0)) {
                lVar34 = 0;
              }
              else {
                lVar34 = *(long *)(lVar34 + 0xe8);
              }
              local_250 = 0;
              local_260 = (undefined8 *******)(PTR_DAT_04bcc2d8 + 0x10);
              uStack_238 = 0x10;
              local_258 = (long ******)(puVar51 + 0x10);
              local_240 = (long ******)&local_250;
              FUN_0018b070(&local_258,*(undefined8 *)(lVar34 + 0x168),0xffffffffffffffff);
              local_230 = *(undefined2 *)(lVar34 + 0x178);
              local_220[0] = 0;
              uStack_208 = 0x10;
              local_228 = (long ******)(puVar51 + 0x10);
              local_210 = local_220;
              FUN_0018b070(&local_228,*(undefined8 *)(lVar34 + 0x198),0xffffffffffffffff);
              iStack_1fc = (int)((ulong)*(undefined8 *)(lVar34 + 0x1a8) >> 0x20);
              local_1f8 = (char)*(undefined8 *)(lVar34 + 0x1b0);
              local_1f7 = (undefined1)((ulong)*(undefined8 *)(lVar34 + 0x1b0) >> 8);
              if (iStack_1fc != 2) {
                FUN_001abf78(&local_260);
                goto LAB_001b23dc;
              }
              lVar34 = FUN_001b8fa0(lVar32,&DAT_0410a6d5,0);
              FUN_001abf78(&local_260);
              if (lVar34 != 0) goto LAB_001b23dc;
              plVar47 = (long *)(puVar57 + 0x18);
              if (*pcVar59 != '\0') {
                puVar24 = (uint *)FUN_03876070(*puVar58);
                uVar21 = *puVar24;
                if (uVar21 != 0) {
                  lVar34 = **(long **)(puVar57 + 0xa0);
                  if ((ulong)((*(long **)(puVar57 + 0xa0))[1] - lVar34 >> 3) <= (ulong)uVar21) {
                    /* WARNING: Subroutine does not return */
                    FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                                 ,0x47,0xe0000003,0);
                  }
                  plVar47 = (long *)(*(long *)(lVar34 + (ulong)uVar21 * 8) + 0x10);
                }
              }
              if ((*plVar47 == 0) || (lVar34 = *(long *)(*plVar47 + 0x10), lVar34 == 0)) {
                lVar34 = 0;
              }
              else {
                lVar34 = *(long *)(lVar34 + 0xe8);
              }
              local_250 = 0;
              local_260 = (undefined8 *******)(PTR_DAT_04bcc2d8 + 0x10);
              uStack_238 = 0x10;
              local_258 = (long ******)(puVar51 + 0x10);
              local_240 = (long ******)&local_250;
              FUN_0018b070(&local_258,*(undefined8 *)(lVar34 + 0x168),0xffffffffffffffff);
              local_230 = *(undefined2 *)(lVar34 + 0x178);
              local_220[0] = 0;
              uStack_208 = 0x10;
              local_228 = (long ******)(puVar51 + 0x10);
              local_210 = local_220;
              FUN_0018b070(&local_228,*(undefined8 *)(lVar34 + 0x198),0xffffffffffffffff);
              cVar12 = *(char *)(lVar34 + 0x1b8);
              local_1f8 = (char)*(undefined8 *)(lVar34 + 0x1b0);
              local_1f7 = (undefined1)((ulong)*(undefined8 *)(lVar34 + 0x1b0) >> 8);
              FUN_001abf78(&local_260);
              if (cVar12 != '\0') {
                FUN_001b3180(param_1,lVar32,*PTR_DAT_04bcc458);
              }
              if (*(int *)(param_1 + 0xb4) != 0) {
                FUN_001984a0(param_1 + 0xa0);
              }
              lVar34 = FUN_00185a6c(0x1c8);
              if (lVar34 != 0) {
                FUN_001b44a0(lVar34,param_1 + 0xa0,&local_98,&local_120);
              }
              cVar12 = *pcVar59;
              plVar47 = (long *)(puVar57 + 0x28);
              *(long *)(param_1 + 0x98) = lVar34;
              if (cVar12 != '\0') {
                puVar24 = (uint *)FUN_03876070(*puVar58);
                uVar21 = *puVar24;
                if (uVar21 != 0) {
                  lVar34 = **(long **)(puVar57 + 0xa0);
                  if ((ulong)((*(long **)(puVar57 + 0xa0))[1] - lVar34 >> 3) <= (ulong)uVar21)
                  goto LAB_001b3024;
                  plVar47 = (long *)(*(long *)(lVar34 + (ulong)uVar21 * 8) + 0x20);
                }
              }
              FUN_00194148(*(undefined8 *)(*(long *)(*plVar47 + 0x10) + 0x10),
                           *(undefined8 *)(param_1 + 0x98),0);
            }
            if (local_88 != 0) {
              pppppplVar55 = *local_90;
              pppppplVar55[1] = (long *****)local_98[1];
              *local_98[1] = (long *****)pppppplVar55;
              local_88 = 0;
              ppppppplVar41 = local_90;
              while ((long ********)ppppppplVar41 != &local_98) {
                ppppppplVar50 = (long *******)ppppppplVar41[1];
                (*(code *)*ppppppplVar41[2])();
                FUN_00187e4c(ppppppplVar41);
                ppppppplVar41 = ppppppplVar50;
              }
            }
            FUN_001b8504(&local_120);
            ppppppplVar46 = (long *******)ppppppplVar46[1];
          } while ((long ********)ppppppplVar46 != &local_1d0);
        }
        if (lVar26 == 0) {
          FUN_00187810(&local_120);
          uVar21 = *(uint *)PTR_DAT_04bcc468;
          uVar25 = (ulong)uVar21;
          if ((int)uVar21 < 0) {
            uVar25 = -(ulong)-uVar21;
          }
          local_260 = (undefined8 *******)(uVar25 + (long)local_120);
          FUN_001b8358(&local_258,lVar32);
          uVar21 = FUN_001b8fa0(lVar32,&DAT_0410a695,0);
          puVar44 = (undefined8 *)(param_1 + 0x158);
          while( true ) {
            puVar31 = (undefined8 *)*puVar44;
            puVar48 = puVar44;
            if ((undefined8 *)*puVar44 == (undefined8 *)0x0) break;
            while( true ) {
              puVar30 = puVar31;
              puVar44 = puVar30;
              if (uVar21 < *(uint *)(puVar30 + 4)) break;
              if (uVar21 <= *(uint *)(puVar30 + 4)) goto LAB_001b2f2c;
              puVar31 = (undefined8 *)puVar30[1];
              if ((undefined8 *)puVar30[1] == (undefined8 *)0x0) {
                puVar44 = puVar30 + 1;
                puVar48 = puVar30;
                goto LAB_001b2ecc;
              }
            }
          }
LAB_001b2ecc:
          puVar30 = (undefined8 *)FUN_00187df4(0xa0);
          *(uint *)(puVar30 + 4) = uVar21;
          puVar30[5] = 0;
          FUN_001b8014(puVar30 + 6);
          *puVar30 = 0;
          puVar30[1] = 0;
          puVar30[2] = puVar48;
          *puVar44 = puVar30;
          puVar31 = puVar30;
          if (**(long **)(param_1 + 0x150) != 0) {
            *(long *)(param_1 + 0x150) = **(long **)(param_1 + 0x150);
            puVar31 = (undefined8 *)*puVar44;
          }
          FUN_03876250(*(undefined8 *)(param_1 + 0x158),puVar31);
          *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 1;
          puVar51 = PTR_DAT_04bc0ec8;
LAB_001b2f2c:
          puVar30[5] = local_260;
          FUN_001b83dc(puVar30 + 6,&local_258);
          FUN_001b8504(&local_258);
        }
        plVar49 = *(long **)(param_1 + 0x40);
        lVar32 = *plVar49;
        *(long *)(lVar32 + 8) = plVar49[1];
        *(long *)plVar49[1] = lVar32;
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
        (**(code **)plVar49[2])();
        FUN_00187e4c(plVar49);
      }
      if (local_1c0 != 0) {
        pppppplVar55 = *local_1c8;
        pppppplVar55[1] = (long *****)local_1d0[1];
        *local_1d0[1] = (long *****)pppppplVar55;
        local_1c0 = 0;
        ppppppplVar46 = local_1c8;
        while ((long ********)ppppppplVar46 != &local_1d0) {
          ppppppplVar41 = (long *******)ppppppplVar46[1];
          (*(code *)*ppppppplVar46[2])();
          FUN_00187e4c(ppppppplVar46);
          ppppppplVar46 = ppppppplVar41;
        }
      }
    } while (*(long *)(param_1 + 0x48) != 0);
  }
  (**(code **)(*plVar45 + 0x20))();
  return;
}

