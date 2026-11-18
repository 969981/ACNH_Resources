
/* WARNING: Removing unreachable block (ram,0x032d8a88) */

void FUN_032d8a50(long *param_1,undefined8 *param_2,undefined1 param_3,uint param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  plVar2 = (long *)(**(code **)(*(long *)*param_2 + 0x30))((long *)*param_2,0x150,0x10);
  FUN_0037bb94();
  puVar1 = PTR_DAT_04bc9488;
  plVar2[0x1b] = 0;
  plVar2[0x1c] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[0x1d] = (long)&PTR_LAB_04b177d8;
  plVar2[0x1e] = 0;
  *(undefined2 *)((long)plVar2 + 0xd2) = 0;
  plVar2[0x23] = (long)&PTR_LAB_04b1b4a8;
  plVar2[0x24] = 0;
  *(undefined1 *)((long)plVar2 + 0xd4) = 1;
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  FUN_0037d014(uVar4,lVar3,plVar2);
  FUN_0037d044(uVar4,lVar3);
  FUN_0037cfe0(plVar2,lVar3);
  FUN_0037c2a0(plVar2,"LazyFontPane");
  *(undefined1 *)((long)plVar2 + 0xd4) = param_3;
  if ((param_4 & 1) != 0) {
    FUN_032cd840(plVar2,param_2);
  }
  *(byte *)(plVar2 + 0xb) = *(byte *)(plVar2 + 0xb) | 8;
  return;
}

