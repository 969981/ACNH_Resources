
void FUN_004c94a0(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  do {
    uVar1 = FUN_00428440(param_2);
    switch(uVar1 & 0x1f) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return;
    case 6:
      param_2 = FUN_00426d90(param_2);
      if (param_2 == 0) {
        return;
      }
      break;
    case 7:
      FUN_004ca4b0(param_1,param_2);
      return;
    case 8:
      lVar2 = FUN_00426d90(param_2);
      if (lVar2 == 0) {
        return;
      }
      param_2 = FUN_00426d90(param_2);
      break;
    default:
      local_28 = 0;
      local_38 = 0;
      puStack_30 = &DAT_0413df78;
      FUN_004223c0(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                   0x1b,"Bad type visitor switch",&local_38);
      return;
    }
  } while( true );
}

