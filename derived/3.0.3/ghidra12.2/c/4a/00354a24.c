
void FUN_00354a24(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  if (*(uint *)(param_1 + 0x1ba8) != param_2) {
    nn::fontll::ScalableFontEngine::SetFont(*(char **)(param_1 + 8));
    nn::fontll::ScalableFontEngine::GetError();
    nn::fontll::ScalableFontEngine::SetBoldWeight((int)*(undefined8 *)(param_1 + 8));
    nn::fontll::ScalableFontEngine::GetError();
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = 0;
    if (*(char *)(*(long *)(param_1 + 0x1c00) + (ulong)param_2) != '\0') {
      nn::fontll::ScalableFontEngine::SetOutlineWidth((ushort)uVar1);
      uVar1 = *(undefined8 *)(param_1 + 8);
      uVar2 = 2;
    }
    nn::fontll::ScalableFontEngine::SetFlags(uVar1,uVar2);
    nn::fontll::ScalableFontEngine::GetError();
    *(uint *)(param_1 + 0x1ba8) = param_2;
  }
  return;
}

