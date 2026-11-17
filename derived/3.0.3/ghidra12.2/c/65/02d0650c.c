
void FUN_02d0650c(long param_1)

{
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined4 local_34;
  undefined2 local_30;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  
  if (-1 < *(int *)(param_1 + 0x927f8)) {
    local_68 = DAT_05586008;
    local_66 = DAT_0558600a;
    local_65 = DAT_0558600b;
    local_64 = DAT_0558600c;
    local_60 = DAT_05586008;
    local_5e = DAT_0558600a;
    local_5d = DAT_0558600b;
    local_5c = DAT_0558600c;
    local_58 = DAT_05586008;
    local_56 = DAT_0558600a;
    local_55 = DAT_0558600b;
    local_54 = DAT_0558600c;
    local_50 = DAT_05586008;
    local_4e = DAT_0558600a;
    local_4d = DAT_0558600b;
    local_4c = DAT_0558600c;
    local_48 = DAT_05586008;
    local_46 = DAT_0558600a;
    local_45 = DAT_0558600b;
    local_44 = DAT_0558600c;
    local_40 = DAT_05586008;
    local_3e = DAT_0558600a;
    local_3d = DAT_0558600b;
    local_3c = DAT_0558600c;
    local_38 = DAT_05586008;
    local_36 = DAT_0558600a;
    local_35 = DAT_0558600b;
    local_34 = DAT_0558600c;
    local_30 = DAT_05586008;
    local_2e = DAT_0558600a;
    local_2d = DAT_0558600b;
    local_2c = DAT_0558600c;
    local_28 = DAT_05586008;
    local_26 = DAT_0558600a;
    local_25 = DAT_0558600b;
    local_24 = DAT_0558600c;
    if (*(int *)(param_1 + 0x927fc) == 3) {
      FUN_02d06364(param_1,&local_68);
    }
    else if (*(int *)(param_1 + 0x927fc) == 2) {
      FUN_02d060c0(param_1,&local_68);
    }
    else {
      FUN_02ce642c(param_1 + 0x1c498,&local_68);
    }
    FUN_033c12d8(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),*(int *)(param_1 + 0x927f8),
                 &local_68);
  }
  return;
}

