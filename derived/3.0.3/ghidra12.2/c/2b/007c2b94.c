
void FUN_007c2b94(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (DAT_04d02f58 != 0) {
    FUN_009b4fc4();
  }
  lVar3 = DAT_05354e58;
  if ((((DAT_05354e58 != 0 && DAT_05381e48 != 0) &&
       (uVar2 = nn::pctl::CheckFreeCommunicationPermission(false), (uVar2 & 1) != 0)) &&
      (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) && (*(int *)(lVar3 + 0x40) == 8)) {
    *(undefined1 *)(lVar3 + 0xa9) = 1;
    *(undefined4 *)(lVar3 + 0x80) = 0x96;
  }
  if ((DAT_053719b8 != 0) &&
     (**(long **)(DAT_053719b8 + 8) != 0 || (*(long **)(DAT_053719b8 + 8))[1] != 0)) {
    if ((DAT_05379880 != 0) &&
       (*(int *)(DAT_05379880 + 0x68) == 0 && *(int *)(DAT_05379880 + 0xb0) == 0)) {
      local_50 = CONCAT71(local_50._1_7_,1);
      FUN_01da4dbc(DAT_05379880,&local_50,1);
    }
    puVar1 = DAT_05372848;
    if (((DAT_05372848 != (undefined8 *)0x0) &&
        (**(long **)(DAT_053719b8 + 8) != 0 || (*(long **)(DAT_053719b8 + 8))[1] != 0)) &&
       (uVar2 = FUN_03bf8a30(DAT_05aec360), (uVar2 & 1) == 0)) {
      local_38 = 0x6400000000;
      local_50 = *puVar1;
      local_48 = **(undefined8 **)(DAT_053719b8 + 8);
      uStack_40 = (*(undefined8 **)(DAT_053719b8 + 8))[1];
      FUN_03bf8770(DAT_05aec360,&local_50);
    }
  }
  if ((DAT_0537d558 != 0) && (*(long *)(DAT_0537d558 + 0x18) != 0)) {
    *(undefined2 *)(*(long *)(DAT_0537d558 + 0x18) + 0x84fe) = 10;
  }
  lVar3 = DAT_05ab5ea8;
  if (DAT_05ab5ea8 != 0) {
    *(byte *)(DAT_05ab5ea8 + 0x3ac) = *(byte *)(DAT_05ab5ea8 + 0x3ac) | 1;
    *(undefined8 *)(lVar3 + 0x398) = *(undefined8 *)(DAT_04da6480 + 0x4060);
  }
  *(undefined1 *)(*(long *)PTR_DAT_04bb2230 + 0x488) = 1;
  return;
}

