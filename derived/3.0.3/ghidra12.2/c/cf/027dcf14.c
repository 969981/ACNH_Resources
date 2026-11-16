
void FUN_027dcf14(byte *param_1,ushort *param_2,undefined8 param_3,ulong param_4,undefined4 param_5)

{
  byte *__s;
  byte *__s_00;
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *__s_01;
  byte *pbVar7;
  undefined *local_70;
  char *pcStack_68;
  
  pbVar7 = param_1 + 0xe5ad0;
  __s = param_1 + 0xd28a0;
  __s_01 = param_1 + 0xbf670;
  uVar6 = (ulong)*__s_01;
  if ((((uVar6 < 0x23) && (bVar1 = param_1[0xbf671], bVar1 <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
      (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(bVar1 & 0x1f) & 1) != 0)) &&
     (CONCAT11(*__s_01,bVar1) == (ushort)(*param_2 >> 8 | *param_2 << 8))) {
    memset(__s_01,0,0x13230);
    FUN_0268abb0(__s_01);
  }
  __s_00 = param_1 + 0xf8d00;
  uVar6 = (ulong)*__s;
  if (((uVar6 < 0x23) && (bVar1 = param_1[0xd28a1], bVar1 <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
     ((((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(bVar1 & 0x1f) & 1) != 0 &&
      (CONCAT11(*__s,bVar1) == (ushort)(*param_2 >> 8 | *param_2 << 8))))) {
    memset(__s,0,0x13230);
    FUN_0268abb0(__s);
  }
  uVar6 = (ulong)*pbVar7;
  if (((uVar6 < 0x23) && (bVar1 = param_1[0xe5ad1], bVar1 <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
     ((((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(bVar1 & 0x1f) & 1) != 0 &&
      (CONCAT11(*pbVar7,bVar1) == (ushort)(*param_2 >> 8 | *param_2 << 8))))) {
    memset(pbVar7,0,0x13230);
    FUN_0268abb0(pbVar7);
  }
  uVar6 = (ulong)*__s_00;
  if ((((uVar6 < 0x23) && (bVar1 = param_1[0xf8d01], bVar1 <= (byte)PTR_DAT_04bc27f0[uVar6])) &&
      (((uint)(&DAT_053e6eb8)[uVar6] >> (ulong)(bVar1 & 0x1f) & 1) != 0)) &&
     (CONCAT11(*__s_00,bVar1) == (ushort)(*param_2 >> 8 | *param_2 << 8))) {
    memset(__s_00,0,0x13230);
    FUN_0268abb0(__s_00);
  }
  FUN_027dd450(param_1);
  puVar2 = PTR_DAT_04bb2020;
  uVar6 = (ulong)*param_1;
  pbVar7 = param_1;
  if (uVar6 < 0x23) {
    if ((param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar6]) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
      pbVar7 = param_1 + 0x13230;
      uVar6 = (ulong)*pbVar7;
      if ((uVar6 < 0x23) &&
         ((param_1[0x13231] <= (byte)PTR_DAT_04bc27f0[uVar6] &&
          ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)(param_1[0x13231] & 0x1f) & 1) != 0)))
         ) {
        pbVar7 = param_1 + 0x26460;
        uVar6 = (ulong)*pbVar7;
        if ((uVar6 < 0x23) &&
           ((param_1[0x26461] <= (byte)PTR_DAT_04bc27f0[uVar6] &&
            ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)(param_1[0x26461] & 0x1f) & 1) != 0)
            ))) {
          pbVar7 = param_1 + 0x39690;
          uVar6 = (ulong)*pbVar7;
          if ((uVar6 < 0x23) &&
             ((param_1[0x39691] <= (byte)PTR_DAT_04bc27f0[uVar6] &&
              ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)(param_1[0x39691] & 0x1f) & 1) !=
               0)))) {
            pbVar7 = param_1 + 0x4c8c0;
            uVar6 = (ulong)*pbVar7;
            if ((uVar6 < 0x23) &&
               ((param_1[0x4c8c1] <= (byte)PTR_DAT_04bc27f0[uVar6] &&
                ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1)
                 != 0)))) {
              pbVar7 = param_1 + 0x5faf0;
              uVar6 = (ulong)*pbVar7;
              if ((uVar6 < 0x23) &&
                 ((param_1[0x5faf1] <= (byte)PTR_DAT_04bc27f0[uVar6] &&
                  ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)(param_1[0x5faf1] & 0x1f) & 1)
                   != 0)))) {
                pbVar7 = param_1 + 0x72d20;
                uVar6 = (ulong)*pbVar7;
                if ((uVar6 < 0x23) &&
                   ((param_1[0x72d21] <= (byte)PTR_DAT_04bc27f0[uVar6] &&
                    ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)(param_1[0x72d21] & 0x1f) &
                     1) != 0)))) {
                  pbVar7 = param_1 + 0x85f50;
                  uVar6 = (ulong)*pbVar7;
                  if ((uVar6 < 0x23) &&
                     ((param_1[0x85f51] <= (byte)PTR_DAT_04bc27f0[uVar6] &&
                      ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >> (ulong)(param_1[0x85f51] & 0x1f)
                       & 1) != 0)))) {
                    pbVar7 = param_1 + 0x99180;
                    uVar6 = (ulong)*pbVar7;
                    if ((uVar6 < 0x23) &&
                       ((param_1[0x99181] <= (byte)PTR_DAT_04bc27f0[uVar6] &&
                        ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >>
                          (ulong)(param_1[0x99181] & 0x1f) & 1) != 0)))) {
                      pbVar7 = param_1 + 0xac3b0;
                      uVar6 = (ulong)*pbVar7;
                      if ((uVar6 < 0x23) &&
                         ((param_1[0xac3b1] <= (byte)PTR_DAT_04bc27f0[uVar6] &&
                          ((*(uint *)(PTR_DAT_04bc2a20 + uVar6 * 4) >>
                            (ulong)(param_1[0xac3b1] & 0x1f) & 1) != 0)))) {
                        uVar3 = FUN_027dc5e8(param_1);
                        pbVar7 = __s_01 + (ulong)uVar3 * 0x13230;
                        if (3 < uVar3) {
                          pbVar7 = __s_01;
                        }
                        uVar5 = 3;
                        if ((param_4 & 1) != 0) {
                          uVar5 = 4;
                        }
                        FUN_0268c7a0(pbVar7,param_2,3,uVar5);
                        goto LAB_027dd3f0;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar5 = 3;
  if ((param_4 & 1) != 0) {
    uVar5 = 4;
  }
  FUN_0268c7a0(pbVar7,param_2,3,uVar5);
  FUN_027dc460(param_1,pbVar7);
  uVar6 = (ulong)(byte)*param_2;
  if (0x22 < (byte)*param_2) {
    uVar6 = 0;
  }
  *(uint *)(param_1 + uVar6 * 4 + 0xbf5e0) =
       *(uint *)(param_1 + uVar6 * 4 + 0xbf5e0) | 1 << (ulong)(*(byte *)((long)param_2 + 1) & 0x1f);
  local_70 = puVar2 + 0x10;
  pcStack_68 = "IsNpcIncreased";
  iVar4 = FUN_0273ea30(&local_70);
  if ((iVar4 == 0) && (uVar5 = FUN_021d7d60(pbVar7), (int)uVar5 != -1)) {
    pcStack_68 = "Is3rdNpc";
    local_70 = puVar2 + 0x10;
    FUN_027494ac(uVar5,&local_70,1);
    pcStack_68 = "IsNpcIncreased";
    local_70 = puVar2 + 0x10;
    FUN_0273f3c4(&local_70,1);
  }
LAB_027dd3f0:
  FUN_02690d60(pbVar7);
  local_70 = puVar2 + 0x10;
  pcStack_68 = "ForceMoveOutVillagerIndex";
  uVar5 = FUN_02749650(pbVar7 + 0x1267c,0xffffffff,&local_70,param_5,0);
  FUN_027dd83c(uVar5,pbVar7,param_3);
  return;
}

