
void FUN_0026fe0c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  puVar3 = PTR_DAT_04bc1510;
  if ((*(int *)(param_2 + 1) != 0) &&
     (lVar5 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510), *(long *)(lVar5 + 0x98) != 0)) {
    uVar1 = *(undefined1 *)*param_2;
    switch(uVar1) {
    case 1:
      FUN_0027071c(param_1,param_2);
      return;
    case 2:
      FUN_002708d4(param_1,param_2);
      return;
    case 4:
      FUN_002709fc(param_1,param_2);
      return;
    case 8:
      FUN_00270b14(param_1,param_2);
      return;
    case 0x10:
      FUN_00270bd8(lVar5,param_2);
      return;
    case 0x11:
      if (*(int *)(param_2 + 1) == 2) {
        bVar2 = ((undefined1 *)*param_2)[1];
        plVar7 = (long *)FUN_002ba790(*(undefined8 *)puVar3);
        lVar5 = (**(code **)(*plVar7 + 0x50))(plVar7,bVar2);
        if ((((lVar5 != 0) && (*(long *)(lVar5 + 0x40) == param_2[2])) &&
            (bVar4 = FUN_0026be6c(DAT_04c603c8), bVar2 != bVar4)) &&
           (*(char *)(*(long *)(DAT_04c603c8 + 0x28) + 0x8c) != '\0')) {
          if (bVar2 < 0x20) {
            *(undefined1 *)(*(long *)(DAT_04c603c8 + 0x28) + (ulong)bVar2 + 0x6c) = 0;
          }
          return;
        }
      }
      break;
    case 0x20:
      FUN_00270ce4(param_1,param_2);
      return;
    case 0x21:
      FUN_00270ff4(lVar5,param_2);
      return;
    case 0x24:
      FUN_002710b0(param_1,param_2);
      return;
    case 0x25:
      FUN_00271214(lVar5,param_2);
      return;
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x44:
    case 0x48:
    case 0x49:
    case 0x4a:
      uVar6 = FUN_0026afd0(DAT_04c603c8);
      if ((uVar6 & 1) != 0) {
        switch(uVar1) {
        case 0x40:
          FUN_00271314(uVar6,param_2);
          return;
        case 0x41:
          FUN_002713d8(param_1,param_2);
          return;
        case 0x42:
          FUN_0027147c(uVar6,param_2);
          return;
        case 0x44:
          FUN_00271504(uVar6,param_2);
          return;
        case 0x48:
          FUN_002715e4(uVar6,param_2);
          return;
        case 0x49:
          FUN_0027166c(uVar6,param_2);
          return;
        case 0x4a:
          FUN_00271764(uVar6,param_2);
          return;
        }
      }
      break;
    case 0x80:
      FUN_002718c8(lVar5,param_2);
      return;
    case 0x81:
      FUN_00271a0c(lVar5,param_2);
      return;
    }
  }
  return;
}

