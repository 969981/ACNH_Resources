
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c0b678(long *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_DAT_04bb2030;
  switch(param_2) {
  case 0:
    *(undefined1 *)((long)param_1 + 0x53) = 0;
    *(undefined4 *)(param_1 + 2) = 0x40;
    param_1[1] = (long)param_1 + 0x14;
    uVar4 = s_GetCarnivalFurnitureGreen_04081095._16_8_;
    uVar6 = s_GetCarnivalFurnitureGreen_04081095._8_8_;
    uVar5 = s_GetCarnivalFurnitureGreen_04081095._0_8_;
    if ((char *)((long)param_1 + 0x14) == "GetCarnivalFurnitureGreen") goto LAB_00c0b840;
    *(undefined1 *)((long)param_1 + 0x2c) = 0x6e;
    *(undefined1 *)((long)param_1 + 0x2d) = 0;
    break;
  case 1:
    pcVar2 = (char *)((long)param_1 + 0x14);
    *(undefined1 *)((long)param_1 + 0x53) = 0;
    *(undefined4 *)(param_1 + 2) = 0x40;
    *param_1 = (long)(puVar3 + 0x10);
    param_1[1] = (long)pcVar2;
    uVar4 = s_GetCarnivalFurnitureRed_0408c24d._0_8_;
    if (pcVar2 != "GetCarnivalFurnitureRed") {
      uVar5 = CONCAT17(s_GetCarnivalFurnitureRed_0408c24d[0xf],
                       s_GetCarnivalFurnitureRed_0408c24d._8_7_);
      *(undefined1 *)((long)param_1 + 0x2b) = 0;
      uVar6 = CONCAT71(s_GetCarnivalFurnitureRed_0408c24d._16_7_,
                       s_GetCarnivalFurnitureRed_0408c24d[0xf]);
      *(undefined8 *)pcVar2 = uVar4;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar5;
      *(undefined8 *)((long)param_1 + 0x23) = uVar6;
    }
    goto LAB_00c0b840;
  case 2:
    pcVar2 = (char *)((long)param_1 + 0x14);
    *(undefined1 *)((long)param_1 + 0x53) = 0;
    *(undefined4 *)(param_1 + 2) = 0x40;
    *param_1 = (long)(puVar3 + 0x10);
    param_1[1] = (long)pcVar2;
    uVar6 = s_GetCarnivalFurnitureBlue_04071930._8_8_;
    uVar5 = s_GetCarnivalFurnitureBlue_04071930._0_8_;
    if (pcVar2 == "GetCarnivalFurnitureBlue") goto LAB_00c0b840;
    *(undefined1 *)((long)param_1 + 0x2c) = 0;
    uVar4 = s_GetCarnivalFurnitureBlue_04071930._16_8_;
    *(undefined8 *)pcVar2 = uVar5;
    *(undefined8 *)((long)param_1 + 0x1c) = uVar6;
    goto LAB_00c0b83c;
  case 3:
    *(undefined1 *)((long)param_1 + 0x53) = 0;
    *(undefined4 *)(param_1 + 2) = 0x40;
    *param_1 = (long)(puVar3 + 0x10);
    param_1[1] = (long)param_1 + 0x14;
    uVar4 = s_GetCarnivalFurniturePurple_040f408d._16_8_;
    uVar6 = s_GetCarnivalFurniturePurple_040f408d._8_8_;
    uVar5 = s_GetCarnivalFurniturePurple_040f408d._0_8_;
    if ((char *)((long)param_1 + 0x14) == "GetCarnivalFurniturePurple") goto LAB_00c0b840;
    *(undefined2 *)((long)param_1 + 0x2c) = 0x656c;
    *(undefined1 *)((long)param_1 + 0x2e) = 0;
    break;
  case 4:
    *(undefined1 *)((long)param_1 + 0x53) = 0;
    *(undefined4 *)(param_1 + 2) = 0x40;
    *param_1 = (long)(puVar3 + 0x10);
    param_1[1] = (long)param_1 + 0x14;
    uVar4 = s_GetCarnivalFurnitureRainbow_040a5c8f._16_8_;
    uVar6 = s_GetCarnivalFurnitureRainbow_040a5c8f._8_8_;
    uVar5 = s_GetCarnivalFurnitureRainbow_040a5c8f._0_8_;
    if ((char *)((long)param_1 + 0x14) == "GetCarnivalFurnitureRainbow") goto LAB_00c0b840;
    *(undefined4 *)((long)param_1 + 0x2b) = 0x776f626e;
    *(undefined1 *)((long)param_1 + 0x2f) = 0;
    break;
  default:
    puVar1 = (undefined8 *)((long)param_1 + 0x14);
    *(undefined1 *)((long)param_1 + 0x53) = 0;
    *(undefined4 *)(param_1 + 2) = 0x40;
    param_1[1] = (long)puVar1;
    uVar5 = DAT_040f9342;
    uVar4 = DAT_040f933a;
    if (puVar1 != &DAT_040f933a) {
      *(undefined1 *)((long)param_1 + 0x32) = 0;
      uVar6 = CONCAT26(DAT_040f934a._6_2_,(undefined6)DAT_040f934a);
      *puVar1 = uVar4;
      *(undefined8 *)((long)param_1 + 0x1c) = uVar5;
      uVar4 = CONCAT62(_UNK_040f9352,DAT_040f934a._6_2_);
      *(undefined8 *)((long)param_1 + 0x24) = uVar6;
      *(undefined8 *)((long)param_1 + 0x2a) = uVar4;
    }
    goto LAB_00c0b840;
  }
  *(undefined8 *)((long)param_1 + 0x14) = uVar5;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar6;
LAB_00c0b83c:
  *(undefined8 *)((long)param_1 + 0x24) = uVar4;
LAB_00c0b840:
  *param_1 = (long)&PTR_LAB_048fb9f8;
  return;
}

