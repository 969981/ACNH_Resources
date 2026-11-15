
void FUN_02199cf0(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  byte *pbVar15;
  char cVar16;
  uint *puVar17;
  int *piVar18;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  byte local_28 [4];
  byte local_24 [4];
  
  FUN_02198d70(param_1,2);
  FUN_0252d11c(local_24);
  if ((7 < local_24[0]) ||
     (lVar9 = FUN_0265cf70((long)*(char *)(param_1 + 0xaf8),local_24), lVar9 == 0))
  goto LAB_02199fe0;
  if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
     (puVar10 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar10 == (undefined8 *)0x0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)*puVar10)();
    uVar11 = uVar11 & 0xffffffff;
  }
  puVar4 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "HasAcquaintanceship";
  local_50 = puVar1;
  iVar7 = FUN_02746e10(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8),&local_50);
  if (iVar7 != 0) {
    pcStack_58 = "FirstMeetGreetAtThisVillage";
    local_60 = puVar1;
    iVar7 = FUN_02746e10(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8),&local_60);
    if (iVar7 != 0) {
      uVar12 = FUN_02197070(param_1);
      if (((((uVar12 & 1) == 0) && (uVar12 = FUN_02197450(param_1), (uVar12 & 1) == 0)) &&
          (uVar12 = FUN_0219a020(param_1), (uVar12 & 1) == 0)) &&
         ((uVar12 = FUN_0219a430(param_1), (uVar12 & 1) == 0 &&
          (uVar12 = FUN_0219a820(param_1), (uVar12 & 1) == 0)))) {
        uVar12 = FUN_0219ac30(param_1);
        if (((uVar12 & 1) == 0) || (FUN_0252d11c(local_28), 7 < local_28[0])) {
LAB_02199f7c:
          bVar5 = false;
        }
        else {
          pcStack_48 = "NnpcAppE_Rep_OccuredToday";
          local_50 = puVar4 + 0x10;
          iVar7 = FUN_0274bce0(local_28,&local_50);
          if (iVar7 != 0) goto LAB_02199f7c;
          pcStack_58 = "CountAppE_RepTalk";
          local_60 = puVar4 + 0x10;
          iVar7 = FUN_0273ea30(&local_60);
          bVar5 = iVar7 == 0;
        }
        uVar12 = FUN_0219af10(param_1);
        if ((bVar5) || ((uVar12 & 1) != 0)) goto LAB_02199df4;
      }
      else {
        FUN_0219af10(param_1);
LAB_02199df4:
        if (*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) {
          *(undefined4 *)(param_1 + 0x4cc) = 0;
          *(undefined1 *)(param_1 + 0x4c8) = 0x1f;
          *(undefined1 *)(param_1 + 0x4e1) = 1;
        }
      }
      bVar6 = FUN_0219b250(param_1,0);
      lVar14 = *(long *)PTR_DAT_04bb2208;
      uVar8 = FUN_006bd550("EmoticonGetTalk",0);
      local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar8);
      puVar13 = (uint *)FUN_021cb820(lVar14 + 0x660,&local_50);
      puVar4 = PTR_DAT_04bb6380;
      puVar1 = PTR_DAT_04bb6378;
      if (puVar13 != (uint *)0x0) {
        pbVar15 = (byte *)(param_1 + 0x818);
        if (*puVar13 != 0) {
          cVar16 = *PTR_DAT_04bb6378;
          do {
            if (cVar16 == '\0') {
              cVar16 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar1 = 1;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              uVar2 = *puVar13;
            }
            else {
              uVar2 = *(uint *)(puVar4 + 8);
              if (-1 < (int)uVar2) {
                if (((ushort *)((ulong)uVar2 + (long)puVar13) != (ushort *)0x0) &&
                   (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar13), uVar3 < 0x80)) {
                  pbVar15 = pbVar15 + uVar3;
                }
                break;
              }
              if (uVar2 != 0xffffffff) break;
              uVar2 = *puVar13;
            }
            if ((uVar2 == 0) || (puVar17 = (uint *)(ulong)uVar2, puVar13 == puVar17)) break;
            lVar14 = 0xc;
            if (*(char *)((long)puVar13 + (10 - (long)puVar17)) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar13 + (lVar14 - (long)puVar17);
            if (lVar14 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar17));
            *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar18 = (int *)(lVar14 + 4);
            while (piVar18[-1] != 0x54706054) {
              piVar18 = piVar18 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_02199fbc;
            }
            iVar7 = 0;
            if (*piVar18 != -1) {
              iVar7 = *piVar18;
            }
            *(int *)(puVar4 + 8) = iVar7;
            if (*puVar13 == 0) break;
          } while( true );
        }
LAB_02199fbc:
        *pbVar15 = bVar6 & 1;
      }
    }
  }
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
     (puVar10 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar10 != (undefined8 *)0x0)) {
    (**(code **)*puVar10)();
  }
LAB_02199fe0:
  *(undefined1 *)(param_1 + 0x4e0) = 0;
  return;
}

