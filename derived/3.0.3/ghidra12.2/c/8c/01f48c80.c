
void FUN_01f48c80(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_91;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_61;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined1 local_54;
  
  if ((*(int *)(param_1 + 0xafb4) == 0) || (*(int *)(param_1 + 0xafb4) == 1)) {
    if ((DAT_053e0208 != 0) && (lVar10 = *(long *)(DAT_053e0208 + 0x175a0), lVar10 != 0)) {
      local_54 = 0;
      lVar8 = *(long *)(param_1 + 8);
      local_94 = DAT_05586008;
      local_92 = DAT_0558600a;
      local_84 = DAT_05586008;
      local_82 = DAT_0558600a;
      local_7c = DAT_05586008;
      local_7a = DAT_0558600a;
      local_74 = DAT_05586008;
      local_72 = DAT_0558600a;
      local_6c = DAT_05586008;
      local_6a = DAT_0558600a;
      local_64 = DAT_05586008;
      lVar9 = *(long *)(lVar8 + 0x68);
      local_ac = *(undefined4 *)(lVar9 + 0x280);
      local_62 = DAT_0558600a;
      local_b8 = *(undefined4 *)(lVar8 + 0x230);
      local_a0 = DAT_0558600c;
      local_9c = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
      local_98 = DAT_0558600c;
      local_91 = DAT_0558600b;
      local_90 = DAT_0558600c;
      local_8c = CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008));
      local_88 = DAT_0558600c;
      local_81 = DAT_0558600b;
      local_80 = DAT_0558600c;
      local_79 = DAT_0558600b;
      local_78 = DAT_0558600c;
      local_71 = DAT_0558600b;
      local_70 = DAT_0558600c;
      local_69 = DAT_0558600b;
      local_68 = DAT_0558600c;
      local_61 = DAT_0558600b;
      local_60 = DAT_0558600c;
      uStack_b4 = (undefined4)*(undefined8 *)(lVar9 + 0x278);
      uStack_b0 = (undefined4)((ulong)*(undefined8 *)(lVar9 + 0x278) >> 0x20);
      uStack_58 = *(undefined4 *)(param_1 + 0xaf80);
      local_a8 = CONCAT44(CONCAT13(DAT_0558600b,CONCAT12(DAT_0558600a,DAT_05586008)),
                          *(undefined4 *)(lVar9 + 0x2b4));
      local_5c = *(undefined4 *)(lVar8 + 0x750);
      if ((*(int *)(lVar8 + 0x500) == 1) && (lVar8 = *(long *)(lVar8 + 0x60), lVar8 != 0)) {
        lVar1 = *(long *)(lVar8 + 0x60a8) +
                ((ulong)*(uint *)(*(long *)(lVar8 + 0x60a8) + 0x10) & 1) * 0x20;
        local_a0 = *(undefined4 *)(lVar1 + 0x18);
        local_a8 = CONCAT44(*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar9 + 0x2b4));
        lVar8 = *(long *)(lVar8 + 0x60b0) +
                ((ulong)*(uint *)(*(long *)(lVar8 + 0x60b0) + 0x10) & 1) * 0x20;
        local_9c = *(undefined4 *)(lVar8 + 0x14);
        local_98 = *(undefined4 *)(lVar8 + 0x18);
        FUN_0201a52c(&local_c0);
        local_8c = local_c0;
        local_88 = uStack_bc;
      }
      FUN_0211ca7c(lVar10,&local_b8);
    }
    if ((DAT_05574040 != 0) && (lVar10 = FUN_026f480c(), lVar10 != 0)) {
      lVar8 = lVar10 + 0x10108 + (ulong)*(uint *)(param_1 + 0xafb4) * 0x150;
      if (1 < *(uint *)(param_1 + 0xafb4)) {
        lVar8 = lVar10 + 0x10108;
      }
      if ((*(long *)(lVar8 + 0x28) == 0) ||
         (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x10), puVar6 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)*puVar6)();
        uVar5 = uVar5 ^ 1;
      }
      uVar3 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x750);
      uVar4 = *(undefined4 *)(param_1 + 0xaf80);
      lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      if (lVar10 == 0) {
        uVar11 = 0;
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
        lVar10 = *(long *)(lVar8 + 0x28);
      }
      else {
        uVar15 = *(undefined4 *)(lVar10 + 0x278);
        uVar14 = *(undefined4 *)(lVar10 + 0x27c);
        uVar16 = *(undefined4 *)(lVar10 + 0x280);
        fVar12 = (float)NEON_ucvtf(*(undefined4 *)(lVar10 + 0x2b4));
        fVar12 = fVar12 * 8.381903e-08;
        fVar13 = fVar12 + -360.0;
        if (fVar12 <= 180.0) {
          fVar13 = fVar12;
        }
        uVar11 = (undefined1)(int)(fVar13 * 0.5);
        lVar10 = *(long *)(lVar8 + 0x28);
      }
      if ((lVar10 != 0) && (plVar7 = *(long **)(lVar10 + 0x20), plVar7 != (long *)0x0)) {
        local_b8 = (undefined4)*(undefined8 *)(lVar8 + 8);
        uStack_b4 = (undefined4)((ulong)*(undefined8 *)(lVar8 + 8) >> 0x20);
        uStack_b0 = (undefined4)*(undefined8 *)(lVar8 + 0x10);
        local_ac = (undefined4)((ulong)*(undefined8 *)(lVar8 + 0x10) >> 0x20);
        local_a8 = 0x10;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_b8);
      }
      puVar2 = (undefined1 *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
      *puVar2 = 1;
      *(undefined4 *)(puVar2 + 4) = uVar15;
      *(undefined4 *)(puVar2 + 8) = uVar14;
      *(undefined4 *)(puVar2 + 0xc) = uVar16;
      puVar2[3] = uVar11;
      puVar2[1] = (char)uVar3;
      puVar2[2] = (char)uVar4;
      if ((((uVar5 & 1) == 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
         (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
        (**(code **)*puVar6)();
      }
    }
  }
  return;
}

