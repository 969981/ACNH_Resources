
long FUN_00814b60(uint param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = DAT_04ccc690;
  uVar1 = *(uint *)(DAT_04ccc690 + 0xb);
  lVar4 = DAT_04ccc690[0xc];
  if ((char)DAT_04ccc690[1] == '\0') {
    lVar3 = nn::oe::GetProgramTotalActiveTime();
    *plVar2 = lVar3;
    *(undefined1 *)(plVar2 + 1) = 1;
  }
  else {
    lVar3 = *DAT_04ccc690;
  }
  if (uVar1 <= param_1) {
    param_1 = 0;
  }
  return (lVar3 - *(long *)(lVar4 + (long)(int)param_1 * 8)) / 1000000000;
}

