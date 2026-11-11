
long FUN_004633c0(long *param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  char cVar11;
  undefined8 *puVar12;
  long *local_90;
  long *plStack_88;
  long local_70;
  undefined8 *local_68 [2];
  ulong local_58;
  
  if (*(char *)(*param_1 + 4) == '\0') {
    uVar10 = *(undefined8 *)(param_2 + 8);
  }
  else {
    uVar10 = 0;
  }
  FUN_00427c30(&local_90,param_2,uVar10);
  puVar3 = PTR_DAT_04bd73b0;
  bVar2 = *(byte *)(*param_1 + 1);
  cVar11 = *(char *)(*param_1 + 2);
  if (bVar2 == 0) {
    if (cVar11 == '\0') {
      do {
        while( true ) {
          do {
            do {
              if (local_90 + 1 < plStack_88) {
                local_90 = local_90 + 1;
                uVar9 = FUN_004290b0();
              }
              else {
                uVar9 = FUN_00427c40(&local_90);
                if ((uVar9 & 1) == 0) {
                  return 0;
                }
                uVar9 = FUN_004290b0(local_90);
              }
            } while ((uVar9 & 0x30) == 0);
            local_70 = *local_90;
            puVar12 = (undefined8 *)*param_3;
            iVar7 = FUN_00429050(&local_70);
            lVar4 = local_70;
            iVar8 = *(int *)(param_3 + 1);
          } while ((local_70 == 0) && (*(char *)*puVar12 == '\0'));
          iVar1 = *(int *)((long)param_3 + 0xc) + iVar7;
          FUN_00427bc0(local_68,local_70,&DAT_04c15808);
          puVar5 = local_68[0];
          if ((local_58 & 1) != 0) {
            FUN_0043dd50(local_58 & 0xfffffffffffffffe);
          }
          if (puVar5 != (undefined8 *)0x0) break;
          iVar8 = FUN_00462730(puVar12,lVar4,iVar8 + iVar7,lVar4,iVar1);
          if (iVar8 < 0) goto LAB_00463618;
        }
        iVar8 = (*(code *)*puVar5)(puVar12[1],lVar4,iVar8 + iVar7,lVar4,iVar1);
      } while (-1 < iVar8);
      goto LAB_00463618;
    }
    cVar11 = '\x01';
  }
  do {
    while( true ) {
      do {
        do {
          if (local_90 + 1 < plStack_88) {
            local_90 = local_90 + 1;
            uVar9 = FUN_004290b0();
          }
          else {
            uVar9 = FUN_00427c40(&local_90);
            if ((uVar9 & 1) == 0) {
              return 0;
            }
            uVar9 = FUN_004290b0(local_90);
          }
        } while (((uVar9 & 0x30) == 0) ||
                (bVar6 = FUN_004290b0(local_90), ((bVar2 | (cVar11 != '\0') << 4) & bVar6) != 0));
        local_70 = *local_90;
        puVar12 = (undefined8 *)*param_3;
        iVar7 = FUN_00429050(&local_70);
        lVar4 = local_70;
        iVar8 = *(int *)(param_3 + 1);
      } while ((local_70 == 0) && (*(char *)*puVar12 == '\0'));
      iVar1 = *(int *)((long)param_3 + 0xc) + iVar7;
      FUN_00427bc0(local_68,local_70,puVar3);
      puVar5 = local_68[0];
      if ((local_58 & 1) != 0) {
        FUN_0043dd50(local_58 & 0xfffffffffffffffe);
      }
      if (puVar5 != (undefined8 *)0x0) break;
      iVar8 = FUN_00462730(puVar12,lVar4,iVar8 + iVar7,lVar4,iVar1);
      if (iVar8 < 0) goto LAB_00463618;
    }
    iVar8 = (*(code *)*puVar5)(puVar12[1],lVar4,iVar8 + iVar7,lVar4,iVar1);
  } while (-1 < iVar8);
LAB_00463618:
  return *local_90;
}

