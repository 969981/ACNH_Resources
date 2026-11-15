
undefined8 FUN_02091764(int param_1,int param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    if (DAT_05454630 != '\0' && DAT_05454828 == param_1) {
      return 1;
    }
LAB_02091800:
    if ((DAT_05454908 != '\0') && (DAT_05454b00 == param_1)) {
      return 1;
    }
    if (param_2 == 3) goto LAB_02091824;
    if ((DAT_05454be0 != '\0') && (DAT_05454dd8 == param_1)) {
      return 1;
    }
    if (param_2 != 4) goto LAB_02091824;
    if ((DAT_05455190 != '\0') && (DAT_05455388 == param_1)) {
      return 1;
    }
LAB_020918cc:
    if ((DAT_05455468 != '\0') && (DAT_05455660 == param_1)) {
      return 1;
    }
    if (param_2 == 7) goto LAB_02091914;
    if ((DAT_05455740 != '\0') && (DAT_05455938 == param_1)) {
      return 1;
    }
    if (param_2 != 8) goto LAB_02091914;
LAB_02091938:
    lVar1 = FUN_021c9770(9,1);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1f8) == param_1)) {
      return 1;
    }
    if (param_2 != 10) goto LAB_0209195c;
LAB_02091980:
    lVar1 = FUN_021c9770(0xb,1);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1f8) == param_1)) {
      return 1;
    }
    if (param_2 != 0xc) goto LAB_020919a4;
LAB_020919c8:
    lVar1 = FUN_021c9770(0xd,1);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1f8) == param_1)) {
      return 1;
    }
    if (param_2 != 0xe) goto LAB_020919ec;
  }
  else {
    if (DAT_05454358 != '\0' && (int)DAT_05454550 == param_1) {
      return 1;
    }
    if (param_2 == 1) goto LAB_02091800;
    if ((DAT_05454630 != '\0') && (DAT_05454828 == param_1)) {
      return 1;
    }
    if (param_2 != 2) goto LAB_02091800;
    if ((DAT_05454be0 != '\0') && (DAT_05454dd8 == param_1)) {
      return 1;
    }
LAB_02091824:
    if ((DAT_05454eb8 != '\0') && (DAT_054550b0 == param_1)) {
      return 1;
    }
    if (param_2 == 5) goto LAB_020918cc;
    if ((DAT_05455190 != '\0') && (DAT_05455388 == param_1)) {
      return 1;
    }
    if (param_2 != 6) goto LAB_020918cc;
    if ((DAT_05455740 != '\0') && (DAT_05455938 == param_1)) {
      return 1;
    }
LAB_02091914:
    lVar1 = FUN_021c9770(8,1);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1f8) == param_1)) {
      return 1;
    }
    if (param_2 != 9) goto LAB_02091938;
LAB_0209195c:
    lVar1 = FUN_021c9770(10,1);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1f8) == param_1)) {
      return 1;
    }
    if (param_2 != 0xb) goto LAB_02091980;
LAB_020919a4:
    lVar1 = FUN_021c9770(0xc,1);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1f8) == param_1)) {
      return 1;
    }
    if (param_2 != 0xd) goto LAB_020919c8;
LAB_020919ec:
    lVar1 = FUN_021c9770(0xe,1);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1f8) == param_1)) {
      return 1;
    }
    if (param_2 == 0xf) goto LAB_02091a34;
  }
  lVar1 = FUN_021c9770(0xf,1);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1f8) == param_1)) {
    return 1;
  }
  if (param_2 == 0x10) {
    return 0;
  }
LAB_02091a34:
  lVar1 = FUN_021c9770(0x10,1);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x1f8) != param_1)) {
    return 0;
  }
  return 1;
}

