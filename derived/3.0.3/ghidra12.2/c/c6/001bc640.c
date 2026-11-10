
bool FUN_001bc640(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined2 *puVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  bool bVar14;
  ulong uVar15;
  undefined1 auStack_1f8 [8];
  long local_1f0 [2];
  undefined2 local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined8 local_1c8;
  undefined2 local_1c0;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined8 local_188;
  undefined2 local_180;
  undefined8 local_178;
  undefined2 local_170;
  undefined8 local_168;
  undefined2 local_160;
  undefined8 local_158;
  undefined2 local_150;
  undefined8 local_148;
  undefined2 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined8 local_118;
  undefined2 local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [144];
  
  local_1f0[0]._0_2_ = 0;
  plVar12 = (long *)(param_1 + 0x38);
  local_1f0[1] = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  (**(code **)(*plVar12 + 0x10))(plVar12);
  puVar3 = *(undefined2 **)(param_1 + 8);
  puVar4 = *(undefined2 **)(param_1 + 0x10);
  if ((long)puVar4 - (long)puVar3 != 0) {
    plVar8 = local_1f0;
    puVar10 = puVar3;
    do {
      *(undefined2 *)plVar8 = *puVar10;
      plVar1 = (long *)(puVar10 + 4);
      puVar10 = puVar10 + 8;
      plVar8[1] = *plVar1;
      plVar8 = plVar8 + 2;
    } while (puVar10 != puVar4);
  }
  (**(code **)(*plVar12 + 0x20))(plVar12);
  if (puVar4 != puVar3) {
    plVar12 = (long *)(param_1 + 0x80);
    iVar5 = *(int *)PTR_DAT_04bcbfe8;
    do {
      if (*(int *)(param_1 + 200) != 0) {
        *(int *)(param_1 + 200) = 0;
        break;
      }
      (**(code **)(*(long *)(param_1 + 0x80) + 0x10))(plVar12);
      uVar7 = (**(code **)(**(long **)(PTR_DAT_04bcbf10 + (ulong)*(uint *)(param_1 + 0xe0) * 8) +
                          0x30))(*(long **)(PTR_DAT_04bcbf10 + (ulong)*(uint *)(param_1 + 0xe0) * 8)
                                 ,auStack_1f8,1,100);
      if (uVar7 == 0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
        break;
      }
      uVar15 = 0;
      bVar14 = false;
      do {
        uVar9 = 0;
        uVar11 = 0;
        do {
          lVar13 = local_1f0[uVar9 * 2 + 1];
          if (*(char *)(lVar13 + 0x299) == '\0' && *(int *)(lVar13 + 0xc0) == 0) {
            lVar2 = lVar13 + 0x1f0;
            FUN_001e1500(auStack_f0);
            *(undefined8 *)(lVar13 + 0x208) = 0;
            *(undefined8 *)(lVar13 + 0x218) = 0;
            *(undefined2 *)(lVar13 + 0x221) = 0;
            *(byte *)(lVar13 + 0x220) = *(byte *)(lVar13 + 0x220) & 4;
            iVar6 = FUN_001e7470(lVar13,lVar2,auStack_f0);
            if (iVar6 == iVar5) {
              uVar9 = FUN_001c39cc(lVar13 + 0x298,lVar2,auStack_f0);
              if ((uVar9 & 1) != 0) {
                do {
                  if (*(undefined8 **)(lVar13 + 0x470) != (undefined8 *)0x0) {
                    (**(code **)**(undefined8 **)(lVar13 + 0x470))();
                  }
                  FUN_001e1868(auStack_f0);
                  bVar14 = true;
                  if ((*(char *)(lVar13 + 0x299) != '\0') || (*(int *)(lVar13 + 0xc0) != 0))
                  goto LAB_001bc808;
                  FUN_001e1500(auStack_f0);
                  *(undefined8 *)(lVar13 + 0x208) = 0;
                  *(undefined2 *)(lVar13 + 0x221) = 0;
                  *(undefined8 *)(lVar13 + 0x218) = 0;
                  *(byte *)(lVar13 + 0x220) = *(byte *)(lVar13 + 0x220) & 4;
                  iVar6 = FUN_001e7470(lVar13,lVar2,auStack_f0);
                } while ((iVar6 == iVar5) &&
                        (uVar9 = FUN_001c39cc(lVar13 + 0x298,lVar2,auStack_f0), (uVar9 & 1) != 0));
                bVar14 = true;
              }
            }
            FUN_001e1868(auStack_f0);
          }
LAB_001bc808:
          uVar11 = uVar11 + 1;
          uVar9 = (ulong)uVar11;
        } while (uVar9 < (ulong)((long)puVar4 - (long)puVar3 >> 4));
        uVar15 = (ulong)((int)uVar15 + 1);
      } while (uVar15 < uVar7);
      (**(code **)(*plVar12 + 0x20))(plVar12);
    } while (bVar14);
  }
  return puVar4 != puVar3;
}

