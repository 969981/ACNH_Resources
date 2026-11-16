
void FUN_027de4b8(byte *param_1,byte *param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined *local_50;
  char *pcStack_48;
  
  uVar5 = (ulong)*param_1;
  pbVar6 = param_1;
  if (uVar5 < 0x23) {
    if ((param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar5]) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
      pbVar6 = param_1 + 0x13230;
      uVar5 = (ulong)*pbVar6;
      if ((uVar5 < 0x23) &&
         ((param_1[0x13231] <= (byte)PTR_DAT_04bc27f0[uVar5] &&
          ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >> (ulong)(param_1[0x13231] & 0x1f) & 1) != 0)))
         ) {
        pbVar6 = param_1 + 0x26460;
        uVar5 = (ulong)*pbVar6;
        if ((uVar5 < 0x23) &&
           ((param_1[0x26461] <= (byte)PTR_DAT_04bc27f0[uVar5] &&
            ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >> (ulong)(param_1[0x26461] & 0x1f) & 1) != 0)
            ))) {
          pbVar6 = param_1 + 0x39690;
          uVar5 = (ulong)*pbVar6;
          if ((uVar5 < 0x23) &&
             ((param_1[0x39691] <= (byte)PTR_DAT_04bc27f0[uVar5] &&
              ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >> (ulong)(param_1[0x39691] & 0x1f) & 1) !=
               0)))) {
            pbVar6 = param_1 + 0x4c8c0;
            uVar5 = (ulong)*pbVar6;
            if ((uVar5 < 0x23) &&
               ((param_1[0x4c8c1] <= (byte)PTR_DAT_04bc27f0[uVar5] &&
                ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1)
                 != 0)))) {
              pbVar6 = param_1 + 0x5faf0;
              uVar5 = (ulong)*pbVar6;
              if ((uVar5 < 0x23) &&
                 ((param_1[0x5faf1] <= (byte)PTR_DAT_04bc27f0[uVar5] &&
                  ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >> (ulong)(param_1[0x5faf1] & 0x1f) & 1)
                   != 0)))) {
                pbVar6 = param_1 + 0x72d20;
                uVar5 = (ulong)*pbVar6;
                if ((uVar5 < 0x23) &&
                   ((param_1[0x72d21] <= (byte)PTR_DAT_04bc27f0[uVar5] &&
                    ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >> (ulong)(param_1[0x72d21] & 0x1f) &
                     1) != 0)))) {
                  pbVar6 = param_1 + 0x85f50;
                  uVar5 = (ulong)*pbVar6;
                  if ((uVar5 < 0x23) &&
                     ((param_1[0x85f51] <= (byte)PTR_DAT_04bc27f0[uVar5] &&
                      ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >> (ulong)(param_1[0x85f51] & 0x1f)
                       & 1) != 0)))) {
                    pbVar6 = param_1 + 0x99180;
                    uVar5 = (ulong)*pbVar6;
                    if ((uVar5 < 0x23) &&
                       ((param_1[0x99181] <= (byte)PTR_DAT_04bc27f0[uVar5] &&
                        ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >>
                          (ulong)(param_1[0x99181] & 0x1f) & 1) != 0)))) {
                      pbVar6 = param_1 + 0xac3b0;
                      uVar5 = (ulong)*pbVar6;
                      if ((uVar5 < 0x23) &&
                         ((param_1[0xac3b1] <= (byte)PTR_DAT_04bc27f0[uVar5] &&
                          ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >>
                            (ulong)(param_1[0xac3b1] & 0x1f) & 1) != 0)))) {
                        uVar2 = FUN_027dc5e8(param_1);
                        pbVar6 = param_1 + 0xbf670 + (ulong)uVar2 * 0x13230;
                        if (3 < uVar2) {
                          pbVar6 = param_1 + 0xbf670;
                        }
                        FUN_0268c7a0(pbVar6,param_2,3,2);
                        goto LAB_027de7bc;
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
  FUN_0268c7a0(pbVar6,param_2,3,2);
  FUN_027dc460(param_1,pbVar6);
  puVar1 = PTR_DAT_04bb2020;
  uVar5 = (ulong)*param_2;
  if (0x22 < *param_2) {
    uVar5 = 0;
  }
  *(uint *)(param_1 + uVar5 * 4 + 0xbf5e0) =
       *(uint *)(param_1 + uVar5 * 4 + 0xbf5e0) | 1 << (ulong)(param_2[1] & 0x1f);
  local_50 = puVar1 + 0x10;
  pcStack_48 = "IsNpcIncreased";
  iVar3 = FUN_0273ea30(&local_50);
  if ((iVar3 == 0) && (uVar4 = FUN_021d7d60(pbVar6), (int)uVar4 != -1)) {
    puVar1 = puVar1 + 0x10;
    pcStack_48 = "Is3rdNpc";
    local_50 = puVar1;
    FUN_027494ac(uVar4,&local_50,1);
    pcStack_48 = "IsNpcIncreased";
    local_50 = puVar1;
    FUN_0273f3c4(&local_50,1);
  }
LAB_027de7bc:
  uVar4 = FUN_02690d60(pbVar6);
  FUN_027de7e8(uVar4,pbVar6,param_3);
  return;
}

