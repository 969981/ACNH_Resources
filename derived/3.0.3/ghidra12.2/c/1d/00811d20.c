
long FUN_00811d20(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = DAT_04ccc690;
  if ((char)DAT_04ccc690[1] == '\0') {
    lVar2 = nn::oe::GetProgramTotalActiveTime();
    *plVar1 = lVar2;
    *(undefined1 *)(plVar1 + 1) = 1;
  }
  else {
    lVar2 = *DAT_04ccc690;
  }
  return (lVar2 - *param_1) / 1000000000;
}

