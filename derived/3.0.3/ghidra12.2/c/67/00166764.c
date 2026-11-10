
bool FUN_00166764(long param_1,long param_2)

{
  char *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  if (param_1 == 0) {
    bVar6 = false;
  }
  else {
    lVar3 = FUN_00149fbc(*(undefined8 *)(param_1 + 0xd8));
    lVar4 = FUN_00149fc8(*(undefined8 *)(param_1 + 0xd8));
    if (*(long **)(param_2 + 0x4e8) == (long *)0x0) {
      lVar5 = -2;
      bVar6 = false;
    }
    else {
      lVar5 = *(long *)(**(long **)(param_2 + 0x4e8) + 0xf0);
      bVar6 = (0 < lVar3 && lVar5 != lVar3) && (lVar3 < 1 || lVar3 <= lVar5);
    }
    bVar2 = bVar6;
    if (lVar4 < *(long *)(param_2 + 0x40)) {
      bVar2 = true;
    }
    if (0 < lVar4) {
      bVar6 = bVar2;
    }
    pcVar1 = "TRUE";
    if (bVar6 == false) {
      pcVar1 = "FALSE";
    }
    FUN_0014d430(param_1,"Conn: %ld (%p) Receive pipe weight: (%ld/%ld), penalized: %s\n",
                 *(undefined8 *)(param_2 + 0x60),param_2,lVar5,*(long *)(param_2 + 0x40),pcVar1);
  }
  return bVar6;
}

