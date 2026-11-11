
/* WARNING: Removing unreachable block (ram,0x004639d0) */

undefined8 FUN_004637b0(long *param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  undefined8 *local_88;
  undefined8 *puStack_80;
  undefined8 *local_68 [2];
  ulong local_58;
  undefined8 local_48;
  
  if (*(char *)(*param_1 + 4) == '\0') {
    uVar8 = *(undefined8 *)(param_2 + 8);
  }
  else {
    uVar8 = 0;
  }
  FUN_00427c30(&local_88,param_2,uVar8);
  puVar2 = PTR_DAT_04bd73b0;
  bVar1 = *(byte *)(*param_1 + 1);
  cVar9 = *(char *)(*param_1 + 2);
  if (bVar1 == 0) {
    if (cVar9 == '\0') {
      do {
        while( true ) {
          do {
            do {
              if (local_88 + 1 < puStack_80) {
                local_88 = local_88 + 1;
                uVar7 = FUN_004290b0();
              }
              else {
                uVar7 = FUN_00427c40(&local_88);
                if ((uVar7 & 1) == 0) {
                  return 0;
                }
                uVar7 = FUN_004290b0(local_88);
              }
            } while ((uVar7 & 0x30) == 0);
            uVar8 = *local_88;
            puVar10 = (undefined8 *)*param_3;
            iVar6 = *(int *)(param_3 + 1);
            local_48 = uVar8;
            iVar5 = FUN_00429050(&local_48);
          } while (*(char *)*puVar10 == '\0');
          FUN_00427bc0(local_68,uVar8,&DAT_04c15808);
          puVar3 = local_68[0];
          if ((local_58 & 1) != 0) {
            FUN_0043dd50(local_58 & 0xfffffffffffffffe);
          }
          if (puVar3 != (undefined8 *)0x0) break;
          iVar6 = FUN_00462730(puVar10,uVar8,iVar5 + iVar6,0,0);
          if (iVar6 < 0) goto LAB_004639f0;
        }
        iVar6 = (*(code *)*puVar3)(puVar10[1],uVar8,iVar5 + iVar6,0,0);
      } while (-1 < iVar6);
      goto LAB_004639f0;
    }
    cVar9 = '\x01';
  }
  do {
    while( true ) {
      do {
        do {
          if (local_88 + 1 < puStack_80) {
            local_88 = local_88 + 1;
            uVar7 = FUN_004290b0();
          }
          else {
            uVar7 = FUN_00427c40(&local_88);
            if ((uVar7 & 1) == 0) {
              return 0;
            }
            uVar7 = FUN_004290b0(local_88);
          }
        } while (((uVar7 & 0x30) == 0) ||
                (bVar4 = FUN_004290b0(local_88), ((bVar1 | (cVar9 != '\0') << 4) & bVar4) != 0));
        uVar8 = *local_88;
        puVar10 = (undefined8 *)*param_3;
        iVar6 = *(int *)(param_3 + 1);
        local_48 = uVar8;
        iVar5 = FUN_00429050(&local_48);
      } while (*(char *)*puVar10 == '\0');
      FUN_00427bc0(local_68,uVar8,puVar2);
      puVar3 = local_68[0];
      if ((local_58 & 1) != 0) {
        FUN_0043dd50(local_58 & 0xfffffffffffffffe);
      }
      if (puVar3 != (undefined8 *)0x0) break;
      iVar6 = FUN_00462730(puVar10,uVar8,iVar5 + iVar6,0,0);
      if (iVar6 < 0) goto LAB_004639f0;
    }
    iVar6 = (*(code *)*puVar3)(puVar10[1],uVar8,iVar5 + iVar6,0,0);
  } while (-1 < iVar6);
LAB_004639f0:
  return *local_88;
}

