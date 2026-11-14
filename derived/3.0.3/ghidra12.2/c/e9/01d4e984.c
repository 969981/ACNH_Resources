
void FUN_01d4e984(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  byte bVar6;
  long lVar7;
  byte local_38 [4];
  undefined1 local_34 [4];
  
  bVar6 = *param_2;
  if ((long)(char)bVar6 != 0xffffffffffffffff) {
    lVar7 = *DAT_0537d558 + 8;
    pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
    pbVar2 = pbVar1 + ((long)(char)bVar6 & 0xffffffffU) * 0x80;
    if (7 < bVar6) {
      pbVar2 = pbVar1;
    }
    if ((*pbVar2 & 1) != 0) {
      local_38[0] = bVar6;
      FUN_01d3cca0(lVar7,local_38);
    }
    FUN_01d3e314(lVar7);
    bVar6 = *param_2;
    if (bVar6 < 8) {
      lVar7 = param_1 + (ulong)bVar6 * 0xc;
      uVar5 = *(undefined2 *)(lVar7 + 0x108);
      uVar3 = *PTR_DAT_04bb5018;
      *(undefined8 *)(lVar7 + 0x108) = 0x1010000ffff;
      bVar4 = *(byte *)(lVar7 + 0x112);
      *(undefined1 *)(lVar7 + 0x110) = 0;
      *(undefined1 *)(lVar7 + 0x112) = 0;
      if ((bVar4 & 1) != 0) {
        local_34[0] = uVar3;
        FUN_01d6a6f0(param_1,uVar5,local_34);
      }
      FUN_01d6aa30(param_1);
      if ((bVar6 == *(byte *)(param_1 + 0x1e2)) && (bVar6 != *(byte *)(*DAT_0537d558 + 0x473))) {
        lVar7 = *(long *)(*DAT_0537d558 + 0x480);
        if (*(int *)(lVar7 + 0x9c) == 1) {
          *(undefined1 *)(lVar7 + 0x98) = 1;
        }
      }
    }
  }
  FUN_01d66db0(param_1 + 0x200,param_2);
  return;
}

