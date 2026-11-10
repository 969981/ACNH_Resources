
void FUN_002a7a20(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  int iVar14;
  byte bVar15;
  int iVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 auStack_a4 [12];
  undefined8 local_98;
  undefined4 local_90;
  uint local_88 [2];
  undefined1 *local_80;
  undefined4 local_78;
  long *local_70;
  int local_68;
  
  local_70 = param_1 + 2;
  bVar5 = *(int *)((long)param_1 + 0xc) == 1;
  if (!bVar5) {
    local_70 = (long *)0x0;
  }
  local_88[0] = (uint)bVar5;
  local_68 = local_88[0] << 4;
  lVar8 = FUN_002a925c(param_1[6],0);
  if (lVar8 != 0) {
    iVar16 = 0;
    plVar1 = param_1 + 7;
    do {
      lVar8 = FUN_002a925c(param_1[6],iVar16);
      if (-1 < *(char *)(lVar8 + 0xc)) {
        *(undefined1 *)(lVar8 + 0x658) = 0;
        local_98 = 0x8000000000;
        local_90 = 0;
        FUN_002a893c(param_1,&local_98,lVar8,0,"PacketReader::BeginDispatch IsEncrypted() == false")
        ;
        puVar12 = &local_98;
        local_98 = 0x400000000;
        pcVar13 = "PacketReader::BeginDispatch IsEncrypted() == false";
        local_90 = 0;
        goto LAB_002a7b68;
      }
      if (*(char *)(lVar8 + 0x658) == '\0') {
        local_98 = 0x400000000;
        local_90 = 0;
        FUN_002a9300(param_1[6],&local_98);
        local_98 = 0x400000000;
        local_90 = 0;
        FUN_002a893c(param_1,&local_98,lVar8,0,"Packet invalid");
        local_98 = 0x400000000;
        local_90 = 0;
        FUN_002a8940(param_1,&local_98,lVar8,"Packet invalid");
        local_98 = 0x400000000;
        local_90 = 0;
        FUN_002a9300(param_1[6],&local_98);
      }
      else {
        uVar9 = FUN_0022b868(lVar8);
        if ((uVar9 & 1) == 0) {
LAB_002a7dbc:
          *(undefined1 *)(lVar8 + 0x658) = 0;
        }
        else {
          plVar10 = (long *)FUN_002ba574(DAT_04c61168);
          (**(code **)(*plVar10 + 0x20))(&local_98,plVar10,lVar8,0x27);
          local_90 = 0;
          iVar14 = (int)local_98;
          local_98 = 0x8000000000;
          uVar11 = FUN_002a925c(param_1[6],iVar16);
          FUN_002a893c(param_1,&local_98,uVar11,0,"PacketReader::BeginDispatch");
          if (*(char *)(lVar8 + 0xc) < '\0') {
            memset(auStack_a4,0,0xc);
            if (*(int *)((long)param_1 + 0xc) == 1) {
              plVar10 = (long *)param_1[0x16];
              if (plVar10 == (long *)0x0) {
                *(undefined1 *)(lVar8 + 0x658) = 0;
                local_98 = 0x400000000;
                local_90 = 0;
                lVar8 = FUN_002a925c(param_1[6],iVar16);
                puVar12 = &local_98;
                pcVar13 = "PacketReader::BeginDispatch m_pPacketInput == NULL";
              }
              else {
                (**(code **)(*plVar10 + 0x18))(&local_98,plVar10,auStack_a4,0xc,lVar8);
                if ((int)local_98 == 0) {
                  local_80 = auStack_a4;
                  local_78 = 0xc;
                  goto LAB_002a7e18;
                }
                *(undefined1 *)(lVar8 + 0x658) = 0;
                local_b0 = 0x400000000;
                local_a8 = 0;
                lVar8 = FUN_002a925c(param_1[6],iVar16);
                puVar12 = &local_b0;
                pcVar13 = "PacketReader::BeginDispatch CalculateCryptoParameter failed";
              }
            }
            else {
LAB_002a7e18:
              FUN_0022bc38(&local_98,lVar8,local_88);
              puVar4 = PTR_DAT_04bccf10;
              if ((int)local_98 == 0) goto LAB_002a7be8;
              puVar12 = &local_b0;
              *(undefined1 *)(lVar8 + 0x658) = 0;
              pcVar13 = "PacketReader::BeginDispatch decrypting failed";
              local_b0 = 0x8000000000;
              local_a8 = 0;
              *(int *)(puVar4 + 0x2ac) = *(int *)(puVar4 + 0x2ac) + 1;
            }
LAB_002a7b68:
            FUN_002a8940(param_1,puVar12,lVar8,pcVar13);
          }
          else {
LAB_002a7be8:
            if (iVar14 == 0) {
              uVar9 = (**(code **)(*param_1 + 0x98))(param_1,lVar8);
              if ((uVar9 & 1) == 0) goto LAB_002a7dbc;
              uVar18 = 0;
              if (*(uint *)(lVar8 + 0x5f8) < 0x5c1) {
                uVar18 = *(uint *)(lVar8 + 0x5f8);
              }
              *(uint *)(lVar8 + 0x5f8) = uVar18;
              if ((uVar18 < *(byte *)(lVar8 + 0x1a) + 0x20) ||
                 (uVar18 - 0x20 == (uint)*(byte *)(lVar8 + 0x1a))) {
                bVar15 = *(byte *)(param_1 + 4);
                *(byte *)(lVar8 + 0x658) = bVar15 ^ 1;
                if (bVar15 == 0) goto LAB_002a7f98;
              }
              else {
                uVar18 = 0;
                bVar5 = false;
                bVar15 = 0;
                while (FUN_002abaa0(plVar1,lVar8,uVar18), *plVar1 != 0) {
                  bVar7 = *(byte *)(param_1 + 0xc);
                  uVar2 = *(ushort *)((long)param_1 + 0x62);
                  lVar3 = param_1[4];
                  iVar14 = 1;
                  if ((bVar7 & 1) != 0) {
                    iVar14 = 2;
                  }
                  if ((bVar7 & 2) != 0) {
                    iVar14 = iVar14 + 2;
                  }
                  if ((bVar7 & 4) != 0) {
                    iVar14 = iVar14 + 4;
                  }
                  if ((bVar7 & 8) != 0) {
                    iVar14 = iVar14 + 8;
                  }
                  bVar7 = (**(code **)(*param_1 + 0xa0))(param_1);
                  if ((char)lVar3 == '\0') {
                    if ((bVar7 & 1) == 0) {
                      local_90 = 0;
                      local_98 = 0x400000000;
                      FUN_002a8940(param_1,&local_98,lVar8,
                                   "PacketReader::BeginDispatch isValid == false.(skip)");
                      *(undefined1 *)(lVar8 + 0x658) = 0;
                      goto LAB_002a7b00;
                    }
                  }
                  else {
                    bVar15 = bVar15 | bVar7;
                  }
                  bVar5 = (bool)(bVar5 | (*(byte *)((long)param_1 + 0x61) & 6) != 0);
                  if ((*(uint *)(lVar8 + 0x5f8) < *(byte *)(lVar8 + 0x1a) + 0x20) ||
                     (uVar18 = uVar18 + (((uint)uVar2 + iVar14) - 1 & 0xfffffffc) + 4,
                     (*(uint *)(lVar8 + 0x5f8) - (uint)*(byte *)(lVar8 + 0x1a)) - 0x20 <= uVar18))
                  goto LAB_002a7ea4;
                }
                if ((char)param_1[0xe] == '\0') {
                  local_98 = 0x400000000;
                  local_90 = 0;
                  FUN_002a8940(param_1,&local_98,lVar8,
                               "PacketReader::BeginDispatch received invalid message.(skip)");
                  *(undefined1 *)(lVar8 + 0x658) = 0;
                  goto LAB_002a7b00;
                }
LAB_002a7ea4:
                bVar6 = (char)param_1[4] == '\0';
                *(byte *)(lVar8 + 0x658) = bVar6 | bVar15 & 1;
                if (bVar6 || (bVar15 & 1) != 0) {
                  if (bVar5) {
                    if ((*(byte *)(lVar8 + 0x1a) + 0x20 <= *(uint *)(lVar8 + 0x5f8)) &&
                       (*(uint *)(lVar8 + 0x5f8) - 0x20 != (uint)*(byte *)(lVar8 + 0x1a))) {
                      uVar18 = 0;
                      while (FUN_002abaa0(plVar1,lVar8,uVar18), *plVar1 != 0) {
                        if ((*(byte *)((long)param_1 + 0x61) & 6) != 0) {
                          (**(code **)(*param_1 + 0x60))(param_1,plVar1);
                        }
                        bVar15 = *(byte *)(param_1 + 0xc);
                        iVar14 = 1;
                        if ((bVar15 & 1) != 0) {
                          iVar14 = 2;
                        }
                        if ((bVar15 & 2) != 0) {
                          iVar14 = iVar14 + 2;
                        }
                        if ((bVar15 & 4) != 0) {
                          iVar14 = iVar14 + 4;
                        }
                        if ((bVar15 & 8) != 0) {
                          iVar14 = iVar14 + 8;
                        }
                        if ((*(uint *)(lVar8 + 0x5f8) < *(byte *)(lVar8 + 0x1a) + 0x20) ||
                           (uVar18 = uVar18 + (((uint)*(ushort *)((long)param_1 + 0x62) + iVar14) -
                                               1 & 0xfffffffc) + 4,
                           (*(uint *)(lVar8 + 0x5f8) - (uint)*(byte *)(lVar8 + 0x1a)) - 0x20 <=
                           uVar18)) break;
                      }
                    }
                  }
LAB_002a7f98:
                  local_98 = 0x8000000000;
                  local_90 = 0;
                  uVar11 = FUN_002a925c(param_1[6],iVar16);
                  FUN_002a8940(param_1,&local_98,uVar11,"PacketReader::BeginDispatch");
                  uVar17 = *(undefined8 *)(*(long *)PTR_DAT_04bc1510 + 0xa0);
                  uVar11 = FUN_002a925c(param_1[6],iVar16);
                  lVar8 = FUN_002a925c(param_1[6],iVar16);
                  FUN_002a8ab0(&local_98,uVar17,uVar11,1,*(undefined1 *)(lVar8 + 0x1a),0,0);
                }
              }
            }
            else {
              local_98 = 0x8000000000;
              local_90 = 0;
              FUN_002a8940(param_1,&local_98,lVar8,"PacketReader::BeginDispatch InValidFooter");
              *(undefined1 *)(lVar8 + 0x658) = 0;
            }
          }
        }
      }
LAB_002a7b00:
      iVar16 = iVar16 + 1;
      lVar8 = FUN_002a925c(param_1[6],iVar16);
    } while (lVar8 != 0);
  }
  FUN_002a8080(param_1,param_2);
  return;
}

