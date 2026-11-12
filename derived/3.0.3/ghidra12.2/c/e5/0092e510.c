
/* WARNING: Removing unreachable block (ram,0x0092e724) */

void FUN_0092e510(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 local_48;
  char *pcStack_40;
  byte local_34 [4];
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar1 + 4) & 1) != 0) &&
       (FUN_0252d11c(local_34), puVar1 = PTR_DAT_04bb2020, local_34[0] < 8)) {
      local_48 = PTR_DAT_04bb2020 + 0x10;
      pcStack_40 = "IsFirstEnterToCloudIslandThisTime";
      iVar6 = FUN_0274bce0(local_34,&local_48);
      if (iVar6 == 0) {
        FUN_0092e780(local_34);
        if (((((local_34[0] < 8) &&
              (uVar7 = FUN_02582d8c(local_34,1), puVar4 = PTR_DAT_04bb4fb8, uVar7 < 8)) &&
             (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) &&
            ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d6) != '\0' &&
             (uVar7 = FUN_02582d8c(local_34,1), puVar5 = PTR_DAT_04bb4e20, uVar7 < 8)))) &&
           (*(char *)(*(long *)puVar4 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) {
          lVar12 = *(long *)puVar4 + (ulong)uVar7 * 0x13f0;
          *(undefined4 *)(lVar12 + 0x13b8) = 0;
          puVar4 = PTR_DAT_04bb37e0;
          *(undefined4 *)(lVar12 + 0x13bc) = *(undefined4 *)puVar5;
          *(undefined2 *)(lVar12 + 0x13c0) = *(undefined2 *)puVar4;
          *(undefined *)(lVar12 + 0x13c2) = puVar4[2];
          *(undefined *)(lVar12 + 0x13c3) = puVar4[3];
          uVar2 = *(undefined4 *)(puVar4 + 4);
          *(undefined4 *)(lVar12 + 0x13c8) = 0;
          *(undefined4 *)(lVar12 + 0x13c4) = uVar2;
          local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
          FUN_007ef010((long)&local_48 + 4,PTR_DAT_04bb3170);
          *(undefined4 *)(lVar12 + 0x588) = (undefined4)local_48;
          *(undefined2 *)(lVar12 + 0x58e) = 0;
          *(undefined2 *)(lVar12 + 0x58c) = local_48._4_2_;
        }
        local_48 = puVar1 + 0x10;
        pcStack_40 = "IsFirstEnterToCloudIslandThisTime";
        FUN_0274bfe8(local_34,&local_48,1);
        puVar1 = PTR_DAT_04bb2230;
        if ((*(long *)PTR_DAT_04bb2230 != 0) && (*(long *)(*(long *)PTR_DAT_04bb2230 + 0x470) != 0))
        {
          FUN_033d530c();
        }
        local_48 = (undefined *)CONCAT44(local_48._4_4_,4);
        lVar12 = *(long *)PTR_DAT_04bc3a50;
        piVar9 = (int *)(lVar12 + 0xd00);
        if (0 < *piVar9) {
          lVar8 = 0;
          puVar10 = *(undefined8 **)(lVar12 + 0xd10);
          do {
            puVar11 = *(undefined8 **)(*(long *)(lVar12 + 0xd08) + lVar8 * 8);
            lVar8 = lVar8 + 1;
            *puVar11 = puVar10;
            *(undefined8 **)(lVar12 + 0xd10) = puVar11;
            puVar10 = puVar11;
          } while (lVar8 < *piVar9);
        }
        *piVar9 = 0;
        if ((*(long *)puVar1 != 0) && (*(long *)(*(long *)puVar1 + 0x478) != 0)) {
          FUN_033d5cc0();
        }
      }
    }
  }
  return;
}

