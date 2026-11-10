
void FUN_002afca0(undefined8 param_1,long *param_2,uint *param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  ulong uVar6;
  ulong uVar7;
  ErrorResultVariant EVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  uint uVar18;
  ushort uVar19;
  uint local_809c;
  undefined8 local_8098;
  uint local_98;
  ErrorResultVariant aEStack_94 [28];
  uint local_78;
  uint local_74;
  ErrorResultVariant aEStack_70 [12];
  int local_64;
  
  if (param_3 != (uint *)0x0) {
    *param_3 = 0;
  }
  if ((int)param_2[0xc9] == *(int *)PTR_DAT_04bcb8c8) {
    local_8098 = CONCAT44(local_8098._4_4_,0x10c08);
  }
  else {
    if ((param_2[0xca] != 0) && (uVar6 = FUN_002aec18(param_2), (uVar6 & 1) == 0)) {
      FUN_002ae9c0(param_2);
      memset(&local_78,0,4);
      local_8098 = 0;
      FUN_002282f0(&local_8098);
      uVar6 = local_8098;
      uVar7 = FUN_002b0390(param_2);
      lVar9 = param_2[0xd1];
      lVar13 = param_2[0xcf];
      local_8098 = 0;
      FUN_002282f0(&local_8098);
      local_809c = 0;
      if ((ulong)(lVar13 + lVar9) <= local_8098) {
        local_98 = 0;
        FUN_002b04b0(&local_8098,param_2,param_2[0xca],&local_98,param_4);
        local_809c = local_98;
      }
      lVar9 = param_2[0xd2];
      local_8098 = 0;
      lVar13 = param_2[0xcf];
      FUN_002282f0(&local_8098);
      if ((ulong)(lVar13 + lVar9) <= local_8098) {
        local_98 = 0;
        FUN_002b06f0(&local_8098,param_2,param_2[0xca],&local_98,param_4 - local_809c);
        if ((uint)local_8098 == 0) {
          local_809c = local_98 + local_809c;
          memset(param_2 + 0xd5,0,4);
        }
      }
      lVar9 = param_2[200];
      local_8098 = 0;
      lVar13 = param_2[0xcf];
      FUN_002282f0(&local_8098);
      if ((ulong)(lVar13 + lVar9) <= local_8098) {
        lVar9 = param_2[0xca];
        local_64 = 0;
        memset(&local_98,0,4);
        memset(&local_98,0xff,4);
        (**(code **)(*param_2 + 0x58))
                  (&local_8098,param_2,&local_98,lVar9,&local_64,param_4 - local_809c,0);
        if ((uint)local_8098 != 0) {
          if (param_3 != (uint *)0x0) {
            *param_3 = local_809c;
          }
          local_98 = 0;
          local_74 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_94,(Result *)&local_74);
          puVar15 = &local_98;
          goto LAB_002afd40;
        }
        local_809c = local_64 + local_809c;
        if (local_64 != 0) {
          memset(&local_78,0xff,4);
        }
      }
      memset(&local_98,0,0x20);
      if (*(short *)((long)param_2 + 0x32) != 0) {
        uVar18 = 0;
        uVar19 = 0;
        while( true ) {
          uVar2 = *(int *)((long)param_2 + 0x2c) + (uint)uVar19;
          lVar9 = param_2[4];
          uVar12 = 0;
          if (*(uint *)(param_2 + 5) <= uVar2) {
            uVar12 = *(uint *)(param_2 + 5);
          }
          uVar2 = uVar2 - uVar12;
          lVar13 = lVar9 + (ulong)uVar2 * 0x5d0;
          bVar3 = *(byte *)(lVar13 + 0x20);
          if (((bVar3 >> 3 & 1) != 0) && (uVar18 != 0)) break;
          uVar4 = *(ushort *)(param_2 + 6);
          uVar12 = (uint)*(ushort *)(lVar9 + (ulong)uVar2 * 0x5d0 + 0x24);
          if ((uVar4 != 0 && uVar12 == 0) || (0x7f < (int)(uVar12 - uVar4))) break;
          puVar15 = (uint *)(lVar9 + (ulong)uVar2 * 0x5d0 + 0x2c);
          if (*puVar15 != 0) {
            lVar16 = lVar9 + (ulong)uVar2 * 0x5d0;
            *(ushort *)(lVar16 + 0x26) = uVar4;
            *(undefined1 *)(lVar16 + 0x21) = *(undefined1 *)((long)param_2 + 0x36);
            local_64 = 0;
            FUN_002a6b90(&local_74,lVar13 + 0x18,lVar16 + 0x30,&local_64,0x5a0);
            if (*(ulong *)(lVar16 + 8) <= uVar6) {
              puVar17 = (uint *)(lVar9 + (ulong)uVar2 * 0x5d0 + 0x10);
              if (*puVar17 <= param_4 - local_809c) {
                lVar11 = param_2[0xca];
                memset(&local_74,0,4);
                memset(&local_74,0xff,4);
                uVar10 = (**(code **)(*param_2 + 0x50))(param_2,&local_74,lVar11,lVar13);
                if ((uVar10 & 1) != 0) {
                  lVar9 = lVar9 + (ulong)uVar2 * 0x5d0;
                  local_78 = local_78 | *puVar15;
                  *(undefined2 *)(lVar9 + 0x16) = 0;
                  sVar5 = *(short *)(lVar9 + 0x14);
                  *(ulong *)(lVar16 + 8) = uVar7;
                  *(short *)(lVar9 + 0x14) = sVar5 + 1;
                  local_809c = *puVar17 + local_809c;
                  goto LAB_002afeb4;
                }
              }
              if (param_3 != (uint *)0x0) {
                *param_3 = local_809c;
              }
              goto LAB_002b0340;
            }
            uVar10 = (ulong)*(ushort *)(lVar9 + (ulong)uVar2 * 0x5d0 + 0x14);
            if ((uVar10 < 0x20) && (EVar8 = aEStack_94[uVar10 - 4], -1 < (char)EVar8)) {
              (&local_8098)[uVar10 * 0x80 + (ulong)(byte)EVar8] = lVar13;
              aEStack_94[uVar10 - 4] = (ErrorResultVariant)((char)EVar8 + 1);
            }
          }
LAB_002afeb4:
          uVar18 = uVar18 | (bVar3 & 8) >> 3;
          if (uVar19 < *(ushort *)((long)param_2 + 0x32)) {
            uVar19 = uVar19 + 1;
          }
          if (*(ushort *)((long)param_2 + 0x32) <= uVar19) break;
        }
      }
      if (local_809c == 0) {
        if (param_3 != (uint *)0x0) {
          *param_3 = 0;
        }
      }
      else {
        uVar18 = *(int *)(param_2[0xcb] + 8) - 0x30;
        if ((param_4 <= uVar18) || (param_4 = uVar18, local_809c < uVar18)) {
          local_64 = 0;
          (**(code **)(*param_2 + 0x58))
                    (&local_74,param_2,&local_78,param_2[0xca],&local_64,param_4 - local_809c,0);
          lVar9 = 0;
          puVar14 = &local_8098;
          do {
            if (aEStack_94[lVar9 + -4] != (ErrorResultVariant)0x0) {
              uVar6 = 0;
              do {
                plVar1 = puVar14 + uVar6;
                uVar6 = uVar6 + 1;
                *(short *)(*plVar1 + 0x16) = *(short *)(*plVar1 + 0x16) + 1;
              } while (uVar6 < (byte)aEStack_94[lVar9 + -4]);
            }
            lVar9 = lVar9 + 1;
            puVar14 = puVar14 + 0x80;
          } while (lVar9 != 0x20);
          lVar9 = 0;
          puVar14 = &local_8098;
          local_809c = local_64 + local_809c;
          do {
            EVar8 = aEStack_94[lVar9 + -4];
            if (EVar8 != (ErrorResultVariant)0x0) {
              uVar6 = 0;
              do {
                lVar13 = puVar14[uVar6];
                if (param_4 - local_809c < *(uint *)(lVar13 + 0x10)) goto LAB_002b02ac;
                if ((*(ushort *)(lVar13 + 0x14) <= (ushort)*(byte *)(param_2 + 0xd0)) ||
                   ((*(byte *)((long)param_2 + 0x681) != 0 &&
                    ((ushort)*(byte *)((long)param_2 + 0x681) <= *(ushort *)(lVar13 + 0x16))))) {
                  uVar10 = (**(code **)(*param_2 + 0x50))(param_2,&local_78,param_2[0xca],lVar13);
                  if ((uVar10 & 1) == 0) goto LAB_002b02ac;
                  *(ulong *)(lVar13 + 8) = uVar7;
                  *(undefined2 *)(lVar13 + 0x16) = 0;
                  local_809c = *(int *)(lVar13 + 0x10) + local_809c;
                  *(short *)(lVar13 + 0x14) = *(short *)(lVar13 + 0x14) + 1;
                  EVar8 = aEStack_94[lVar9 + -4];
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < (byte)EVar8);
            }
            lVar9 = lVar9 + 1;
            puVar14 = puVar14 + 0x80;
          } while (lVar9 != 0x20);
LAB_002b02ac:
          if (param_3 != (uint *)0x0) {
            *param_3 = local_809c;
          }
          local_74 = 0;
          local_64 = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_64);
          puVar15 = &local_74;
          goto LAB_002afd40;
        }
        if (param_3 != (uint *)0x0) {
          *param_3 = local_809c;
        }
      }
LAB_002b0340:
      local_64 = 0;
      local_74 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_70,(Result *)&local_64);
      puVar15 = &local_74;
      goto LAB_002afd40;
    }
    local_8098 = (ulong)local_8098._4_4_ << 0x20;
  }
  local_98 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_8098 + 4),(Result *)&local_98);
  puVar15 = (uint *)&local_8098;
LAB_002afd40:
  FUN_002296c4(param_1,puVar15);
  return;
}

