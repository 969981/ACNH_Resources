
void FUN_035c6820(long *param_1,undefined1 *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 local_840 [2];
  undefined8 auStack_830 [254];
  
  puVar3 = local_840;
  if (*(char *)((long)param_1 + 0xc) != '\0') {
    local_840[0]._0_1_ = 2;
    (**(code **)(*param_1 + 0x20))(param_1,local_840,1);
  }
  if ((int)param_1[1] == 0) {
    lVar5 = 0;
    do {
      (**(code **)(*param_1 + 0x20))(param_1,local_840,0x800);
      lVar6 = 0;
      uVar7 = 0xfffffffffffffff8;
      do {
        pauVar1 = (undefined1 (*) [16])((long)local_840 + lVar6);
        uVar7 = uVar7 + 0x10;
        pauVar2 = (undefined1 (*) [16])((long)auStack_830 + lVar6);
        puVar3 = (undefined8 *)(param_2 + lVar6);
        lVar6 = lVar6 + 0x20;
        auVar9 = NEON_rev16(*pauVar2,1);
        auVar8 = NEON_rev16(*pauVar1,1);
        puVar3[1] = auVar8._8_8_;
        *puVar3 = auVar8._0_8_;
        puVar3[3] = auVar9._8_8_;
        puVar3[2] = auVar9._0_8_;
      } while (uVar7 < 0x3f8);
      lVar5 = lVar5 + 1;
      param_2 = param_2 + 0x800;
    } while (lVar5 != 0x43);
    (**(code **)(*param_1 + 0x20))(param_1,local_840,0x400);
    lVar5 = 0;
    uVar7 = 0xfffffffffffffff8;
    do {
      uVar7 = uVar7 + 8;
      auVar8 = NEON_rev16(*(undefined1 (*) [16])((long)local_840 + lVar5),1);
      *(long *)((long)(param_2 + lVar5) + 8) = auVar8._8_8_;
      *(long *)(param_2 + lVar5) = auVar8._0_8_;
      lVar5 = lVar5 + 0x10;
    } while (uVar7 < 0x1f8);
  }
  else {
    if ((int)param_1[1] == 2) {
      lVar5 = *param_1;
      uVar4 = 0x21c00;
      puVar3 = (undefined8 *)param_2;
    }
    else {
      lVar5 = 0;
      do {
        uVar7 = 0xfffffffffffffff8;
        lVar6 = 0;
        do {
          uVar7 = uVar7 + 0x10;
          auVar9 = NEON_rev16(((undefined1 (*) [16])(param_2 + lVar6))[1],1);
          auVar8 = NEON_rev16(*(undefined1 (*) [16])(param_2 + lVar6),1);
          *(long *)((long)local_840 + lVar6 + 8) = auVar8._8_8_;
          *(long *)((long)local_840 + lVar6) = auVar8._0_8_;
          *(long *)((long)auStack_830 + lVar6 + 8) = auVar9._8_8_;
          *(long *)((long)auStack_830 + lVar6) = auVar9._0_8_;
          lVar6 = lVar6 + 0x20;
        } while (uVar7 < 0x3f8);
        (**(code **)(*param_1 + 0x20))(param_1,local_840,0x800);
        lVar5 = lVar5 + 1;
        param_2 = param_2 + 0x800;
      } while (lVar5 != 0x43);
      lVar5 = 0;
      uVar7 = 0xfffffffffffffff8;
      do {
        uVar7 = uVar7 + 8;
        auVar8 = NEON_rev16(*(undefined1 (*) [16])(param_2 + lVar5),1);
        *(long *)((long)local_840 + lVar5 + 8) = auVar8._8_8_;
        *(long *)((long)local_840 + lVar5) = auVar8._0_8_;
        lVar5 = lVar5 + 0x10;
      } while (uVar7 < 0x1f8);
      lVar5 = *param_1;
      uVar4 = 0x400;
    }
    (**(code **)(lVar5 + 0x20))(param_1,puVar3,uVar4);
  }
  return;
}

