
ulong FUN_03286910(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *local_40;
  char *pcStack_38;
  undefined8 local_18;
  
  lVar4 = *(long *)(param_1 + 0x110);
  if (lVar4 != 0) {
    do {
      while (*(ulong *)(param_2 + 0x30) < *(ulong *)(lVar4 + 0x20)) {
        lVar4 = *(long *)(lVar4 + 8);
        if (lVar4 == 0) goto LAB_0328696c;
      }
      if (*(ulong *)(param_2 + 0x30) <= *(ulong *)(lVar4 + 0x20)) {
        puVar7 = (undefined8 *)(lVar4 + 0x28);
        goto LAB_03286978;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
    } while (lVar4 != 0);
  }
LAB_0328696c:
  puVar7 = (undefined8 *)0x0;
LAB_03286978:
  uVar3 = FUN_032866f0(puVar7);
  uVar6 = uVar3 & 0xff;
  if (uVar6 == 0) {
    if ((char *)*puVar7 == "Inherit") {
LAB_032869f0:
      local_18 = *(undefined8 *)(param_2 + 0x18);
      local_40 = PTR_DAT_04bc8e68 + 0x10;
      pcStack_38 = "Inherit";
      lVar4 = FUN_032cbb30(&local_18,puVar7,&local_40);
      uVar6 = FUN_03286910(param_1,*(undefined8 *)(lVar4 + 0xe8));
      uVar5 = uVar6 & 0xffffffffffffff00;
      uVar3 = uVar6 & 0xffffffff00000000;
      uVar6 = uVar6 & 0xff;
    }
    else {
      uVar6 = 0;
      bVar2 = true;
      do {
        cVar1 = ((char *)*puVar7)[uVar6];
        if (cVar1 != "Inherit"[uVar6]) break;
        if (cVar1 == '\0') {
          if (bVar2) goto LAB_032869f0;
          break;
        }
        bVar2 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
      uVar6 = 0;
      uVar5 = 0;
      uVar3 = 0xffffffff00000000;
    }
  }
  else {
    uVar5 = uVar3 & 0xffffffffffffff00;
    uVar3 = uVar3 & 0xffffffff00000000;
  }
  return uVar3 | uVar6 | uVar5 & 0xffffff00;
}

