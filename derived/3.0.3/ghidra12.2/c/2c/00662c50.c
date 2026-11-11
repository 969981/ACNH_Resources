
long * FUN_00662c50(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  undefined1 auVar5 [16];
  
  plVar2 = DAT_04c7e728;
  do {
    if (plVar2 == (long *)0x0) {
      return (long *)0x0;
    }
    auVar5 = (**(code **)(*plVar2 + 0x18))(plVar2);
    if (auVar5._0_8_ != auVar5._8_8_) {
      puVar3 = auVar5._0_8_;
      do {
        puVar4 = puVar3 + 1;
        iVar1 = FUN_0043a240(*puVar3,param_1);
        if (iVar1 == 0) {
          return plVar2;
        }
        puVar3 = puVar4;
      } while (auVar5._8_8_ != puVar4);
    }
    plVar2 = (long *)plVar2[1];
  } while( true );
}

