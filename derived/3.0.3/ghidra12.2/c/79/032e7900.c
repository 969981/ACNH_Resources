
void FUN_032e7900(undefined8 *param_1)

{
  void *__s;
  KeyCodeComposer *this;
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  undefined *puVar4;
  int iVar5;
  ushort *puVar6;
  
  __s = (void *)((long)param_1 + 0x2c);
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[4] = 0;
  puVar6 = (ushort *)(param_1 + 0x91);
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  memset(__s,0,0x435);
  memset(param_1 + 0x8d,0,0x1a4);
  this = (KeyCodeComposer *)(param_1 + 0xce);
  param_1[0xc5] = 0;
  *(undefined8 *)((long)param_1 + 0x60c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x614) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x61c) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x624) = 0xffffffff;
  param_1[0xc6] = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x64c) = 0;
  *(undefined4 *)(param_1 + 0xca) = 7;
  *(undefined8 *)((long)param_1 + 0x644) = 0;
  param_1[199] = 0;
  *(undefined2 *)(param_1 + 200) = 0;
  param_1[0xcc] = 0;
  *(undefined2 *)(param_1 + 0xcd) = 0;
  *(undefined8 *)((long)param_1 + 0x654) = 0;
  *(undefined2 *)((long)param_1 + 0x65c) = 0;
  nn::kpr::KeyCodeComposer::KeyCodeComposer(this);
  nn::kpr::KeyCodeComposer::Clear();
  nn::kpr::KeyCodeComposer::SetMode(this,1);
  param_1[0xcc] = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  *(undefined2 *)((long)param_1 + 0x6ac) = 0;
  puVar4 = PTR_DAT_04bc9690;
  param_1[0xd4] = (undefined2 *)((long)param_1 + 0x6ac);
  *(undefined2 *)((long)param_1 + 0x784) = 0;
  *(undefined2 *)((long)param_1 + 0x76c) = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0x61;
  param_1[0xef] = (undefined2 *)((long)param_1 + 0x784);
  *(undefined4 *)(param_1 + 0xf0) = 0x61;
  *(undefined2 *)((long)param_1 + 0x844) = 0;
  param_1[0xd3] = puVar4 + 0x10;
  param_1[0xee] = puVar4 + 0x10;
  *(undefined4 *)(param_1 + 0x109) = 0;
  *(undefined8 *)((long)param_1 + 0x644) = 0;
  param_1[199] = 0;
  *(undefined2 *)(param_1 + 200) = 0;
  *(undefined4 *)((long)param_1 + 0x654) = 0;
  nn::kpr::KeyCodeComposer::Clear();
  nn::kpr::KeyCodeComposer::SetMode(this,1);
  iVar5 = 0;
  param_1[0xcc] = 0;
  param_1[0x8d] = puVar6;
  *(undefined4 *)(param_1 + 0x8e) = 0x61;
  *(undefined2 *)(param_1 + 0xa9) = 0;
  do {
    uVar2 = *puVar6;
    if (uVar2 == 0xe) {
      uVar3 = puVar6[3] >> 1;
      puVar6 = puVar6 + 3 + uVar3;
      iVar5 = iVar5 + (uint)uVar3 + 3;
    }
    else if (uVar2 == 0) {
      *(int *)((long)param_1 + 0x474) = iVar5;
      puVar6 = (ushort *)((long)param_1 + 0x54a);
      *(undefined4 *)(param_1 + 0x90) = 0x61;
      param_1[0x8f] = puVar6;
      *(undefined2 *)((long)param_1 + 0x60a) = 0;
      iVar5 = 0;
      do {
        uVar2 = *puVar6;
        if (uVar2 == 0xe) {
          uVar3 = puVar6[3] >> 1;
          puVar6 = puVar6 + 3 + uVar3;
          iVar5 = iVar5 + (uint)uVar3 + 3;
        }
        else if (uVar2 == 0) {
          *(int *)((long)param_1 + 0x484) = iVar5;
          memset(__s,0,0x424);
          param_1[0x8a] = __s;
          param_1[0x8b] = 0x424;
          *(undefined2 *)((long)param_1 + 0x872) = 0;
          return;
        }
        iVar1 = iVar5 + 2;
        if (uVar2 != 0xf) {
          iVar1 = iVar5;
        }
        iVar5 = iVar1 + 1;
        puVar6 = puVar6 + (ulong)(uVar2 == 0xf) * 2 + 1;
      } while( true );
    }
    iVar1 = iVar5 + 2;
    if (uVar2 != 0xf) {
      iVar1 = iVar5;
    }
    iVar5 = iVar1 + 1;
    puVar6 = puVar6 + (ulong)(uVar2 == 0xf) * 2 + 1;
  } while( true );
}

