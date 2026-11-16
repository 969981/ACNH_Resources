
void FUN_02871e50(long param_1,int *param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  int local_98;
  short sStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  int iStack_84;
  int local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  
  puVar7 = PTR_DAT_04bb43c0;
  uVar10 = 0;
  pcVar1 = (char *)(param_1 + 0x30);
  puVar2 = (undefined8 *)(param_1 + 0x38);
  do {
    lVar11 = *(long *)puVar7;
    lVar3 = param_1 + ((long)((ulong)uVar10 << 0x20) >> 0x1d);
    uVar8 = FUN_0277d6c4(lVar3);
    if (*(long *)puVar7 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if (((uVar8 < *(uint *)(lVar11 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) &&
         ((uVar8 = FUN_02871140(param_1,lVar3), (int)uVar8 < 0 || (pcVar1[uVar8] != '\0')))) {
        uVar8 = FUN_02871140(param_1,lVar3);
        pcVar4 = pcVar1 + uVar8;
        if (5 < uVar8) {
          pcVar4 = pcVar1;
        }
        puVar9 = puVar2 + (ulong)uVar8 * 7;
        if (5 < uVar8) {
          puVar9 = puVar2;
        }
        puVar5 = puVar2;
        if (*pcVar4 != '\0') {
          puVar5 = puVar9;
        }
        uVar6 = *puVar5;
        local_98 = (int)uVar6;
        sStack_94 = (short)((ulong)uVar6 >> 0x20);
        uStack_90 = (undefined4)puVar5[1];
        uStack_8c = (undefined4)((ulong)puVar5[1] >> 0x20);
        local_88 = (undefined4)puVar5[2];
        iStack_84 = (int)((ulong)puVar5[2] >> 0x20);
        local_7c = (int)*(undefined8 *)((long)puVar5 + 0x1c);
        uStack_78 = (undefined4)((ulong)*(undefined8 *)((long)puVar5 + 0x1c) >> 0x20);
        local_74 = (undefined4)*(undefined8 *)((long)puVar5 + 0x24);
        uStack_70 = (undefined4)((ulong)*(undefined8 *)((long)puVar5 + 0x24) >> 0x20);
        uStack_6c = (undefined4)*(undefined8 *)((long)puVar5 + 0x2c);
        local_68 = (int)((ulong)*(undefined8 *)((long)puVar5 + 0x2c) >> 0x20);
        if ((local_7c == param_2[7]) &&
           ((*(long *)(param_2 + 8) == CONCAT44(local_74,uStack_78) &&
            *(long *)(param_2 + 10) == CONCAT44(uStack_6c,uStack_70)) && param_2[0xc] == local_68))
        {
          if ((sStack_94 == 0) || ((short)param_2[1] == 0)) {
            if (local_98 == *param_2) goto LAB_02871fe8;
          }
          else if ((local_98 == *param_2) &&
                  ((*(long *)(param_2 + 1) == CONCAT44(uStack_90,(int)((ulong)uVar6 >> 0x20)) &&
                   *(long *)(param_2 + 3) == CONCAT44(local_88,uStack_8c)) &&
                   param_2[5] == iStack_84)) {
LAB_02871fe8:
            uVar8 = FUN_02871140(param_1,lVar3);
            if (uVar8 < 4) {
              pcVar1[uVar8] = '\0';
              puVar9 = puVar2 + (ulong)uVar8 * 7;
              *puVar9 = 0;
              puVar9[1] = 0;
              puVar9[2] = 0;
              *(undefined1 *)(puVar9 + 3) = 2;
              *(undefined8 *)((long)puVar9 + 0x1c) = 0;
              *(undefined8 *)((long)puVar9 + 0x24) = 0;
              *(undefined8 *)((long)puVar9 + 0x2c) = 0;
              *(undefined4 *)((long)puVar9 + 0x34) = 0;
            }
          }
        }
      }
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == 6) {
      return;
    }
  } while( true );
}

